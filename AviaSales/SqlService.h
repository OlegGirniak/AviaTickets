#pragma once
#pragma comment(lib, "advapi32.lib")

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

#include "Customer.h"
#include "Administrator.h"
#include "OtherFunc.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;



ref class SqlService
{
public:
	sql::mysql::MySQL_Driver* driver;
	sql::Connection* con;
	sql::ResultSet* res;
	//sql::ResultSet* insertCar;

	SqlService()
	{
		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "", "");
		con->setSchema("AviaTickets");
	}

	void AddCustomer(Customer^ newCustomer)
	{
		if (!(CheckIfCustomerExists(newCustomer) && CheckIfAdminExists(newCustomer)))
		{
			try
			{
				sql::PreparedStatement* insertStmt = con->prepareStatement("INSERT INTO Customers (email, password, countOfTickets, balance, ifAccountVerified) VALUES (?, ?, 0, 0, 0)");
				insertStmt->setString(1, ConvertToString(newCustomer->Email));
				insertStmt->setString(2, ConvertToString(newCustomer->Password));
			/*	insertStmt->setString(3, 0);
				insertStmt->setString(4, 0);
				insertStmt->setString(5, 0);*/

				insertStmt->executeUpdate();

				delete insertStmt;
			}
			catch (const std::exception& e)
			{
				std::cout << e.what() << "\n";
			}
		}
		else
		{
			MessageBox::Show("Error", "Customer exists", MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}

	bool CheckIfCustomerExists(User^ customer)
	{
		sql::PreparedStatement* pstmt = con->prepareStatement("SELECT COUNT(*) as user_exists FROM Customers WHERE email = ?");
		pstmt->setString(1, ConvertToString(customer->Email));

		res = pstmt->executeQuery();

		if (res->next())
		{
			if (res->getInt("user_exists") > 0)
				return true;
			else
				return false;
		}

		delete pstmt;
	}

	bool CheckIfAdminExists(User^ admin)
	{
		sql::PreparedStatement* pstmt = con->prepareStatement("SELECT COUNT(*) as admin_exists FROM Admins WHERE email = ?");
		pstmt->setString(1, ConvertToString(admin->Email));

		res = pstmt->executeQuery();

		if (res->next())
		{
			if (res->getInt("admin_exists") > 0)
				return true;
			else
				return false;
		}

		delete pstmt;
	}

	bool CheckCorrectPassword(User^ user)
	{
		// check admins table
		sql::PreparedStatement* pstmt = con->prepareStatement("SELECT * FROM Admins WHERE email = ?");
		pstmt->setString(1, ConvertToString(user->Email));

		res = pstmt->executeQuery();

		if (res->next())
		{
			String^ realPassword = ConvertToSystemString(res->getString("password"));

			if (user->Password == realPassword)
				return true;
		}

		// check customers table
		pstmt = con->prepareStatement("SELECT * FROM Customers WHERE email = ?");
		pstmt->setString(1, ConvertToString(user->Email));

		res = pstmt->executeQuery();

		if (res->next())
		{
			String^ realPassword = ConvertToSystemString(res->getString("password"));

			if (user->Password == realPassword)
				return true;
		}

		return false;
	}

	Customer^ GetCustomer(User^ user)
	{
		sql::PreparedStatement* pstmt = con->prepareStatement("SELECT * FROM Customers WHERE email = ?");
		pstmt->setString(1, ConvertToString(user->Email));

		res = pstmt->executeQuery();

		if (res->next())
		{
			String^ customerEmail = ConvertToSystemString(res->getString("email"));
			String^ customerPassword = ConvertToSystemString(res->getString("password"));
			int customerBalance = res->getInt("balance");
			bool ifAccountVerified = res->getBoolean("ifAccountVerified");

			Customer^ customer = gcnew Customer(customerEmail, customerPassword, customerBalance, ifAccountVerified);

			return customer;
		}
	}

	Administrator^ GetAdmin(User^ user)
	{
		sql::PreparedStatement* pstmt = con->prepareStatement("SELECT * FROM Admins WHERE email = ?");
		pstmt->setString(1, ConvertToString(user->Email));

		res = pstmt->executeQuery();

		if (res->next())
		{
			String^ adminEmail = ConvertToSystemString(res->getString("email"));
			String^ adminPassword = ConvertToSystemString(res->getString("password"));

			Administrator^ admin = gcnew Administrator(adminEmail, adminPassword);

			return admin;	
		}
	}

	void VerifyAccount(Customer^ customer)
	{
		sql::PreparedStatement* pstmt = con->prepareStatement("UPDATE Customers SET ifAccountverified = 1 WHERE email = ?");

		pstmt->setString(1, ConvertToString(customer->Email));

		res = pstmt->executeQuery();
		
	}
};
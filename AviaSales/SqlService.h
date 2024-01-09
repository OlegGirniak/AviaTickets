#pragma once
#pragma comment(lib, "advapi32.lib")

#include <mysql_driver.h>
#include <mysql_connection.h>
#include <cppconn/resultset.h>
#include <cppconn/statement.h>
#include <cppconn/prepared_statement.h>

#include "Customer.h"

ref class SqlService
{
public:
	sql::mysql::MySQL_Driver* driver;
	sql::Connection* con;
	sql::Statement* stmt;
	sql::ResultSet* res;
	sql::ResultSet* insertCar;

	SqlService()
	{
		driver = sql::mysql::get_mysql_driver_instance();
		con = driver->connect("tcp://127.0.0.1:3306", "root", "1234");
		con->setSchema("AviaTickets");
	}

	void AddCustomer(Customer^ newCustomer)
	{

	}
};
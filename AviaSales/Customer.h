#pragma once

#include "User.h"
#include "Ticket.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Customer : public User
{
	List<Ticket^>^ tickets;
    int balance;

public:

    Customer(String^ userName, String^ userPassword, int balance)
        : User(userName, userPassword), tickets(gcnew List<Ticket^>()), balance(balance)
    { }

    Customer(String^ userName, String^ userPassword, List<Ticket^>^ customerTickets, int balance)
        : User(userName, userPassword), tickets(customerTickets), balance(balance)
    {
        tickets = customerTickets;
    }

    int GetBalance()
    {
        return balance;
    }

    void SetBalance(int newBalance)
    {
        balance = newBalance;
    }

};
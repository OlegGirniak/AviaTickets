#pragma once

#include "User.h"
#include "Ticket.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Customer : public User
{
	List<Ticket^>^ tickets;
    int balance;
    bool accountVerify;

public:

    Customer(String^ userName, String^ userPassword, int balance, bool accountVerify)
        : User(userName, userPassword), tickets(gcnew List<Ticket^>()), balance(balance), accountVerify(accountVerify)
    { }

    Customer(String^ userName, String^ userPassword, List<Ticket^>^ customerTickets, int balance, bool accountVerify)
        : User(userName, userPassword), tickets(customerTickets), balance(balance), accountVerify(accountVerify)
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

    bool Verified()
    {
        return accountVerify;
    }

};
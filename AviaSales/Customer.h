#pragma once

#include "User.h"
#include "Ticket.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Customer : public User
{
	List<Ticket^>^ tickets;

public:

    Customer(String^ userName, String^ userPassword)
        : User(userName, userPassword), tickets(gcnew List<Ticket^>())
    { }

    Customer(String^ userName, String^ userPassword, List<Ticket^>^ customerTickets)
        : User(userName, userPassword), tickets(customerTickets)
    {
        tickets = customerTickets;
    }
};
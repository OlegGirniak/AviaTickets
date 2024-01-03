#pragma once
#include "User.h"
#include "Customer.h"
#include "Ticket.h"

using namespace System;
using namespace System::Collections::Generic;

ref class Administrator : public User
{
public:
    Administrator(String^ userName, String^ userPassword)
        : User(userName, userPassword)
    { }

    void AddCustomer(List<Customer^>^ customers) {}
    void RemoveCustomer(List<Customer^>^ customers) {}
    void AddTicket(List<Ticket^>^ tickets) {}
    void RemoveTicket(List<Ticket^>^ tickets) {}
    //void AddPlane(List<Plane^>^ planes);
    //void RemovePlane(List<Plane^>^ planes);
};


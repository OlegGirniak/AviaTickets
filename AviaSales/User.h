#pragma once
using namespace System;

public ref class User 
{

    String^ email;
    String^ password;

public:

    User() {}

    User(String^ email, String^ password)
        : email(email), password(password)
    { }

    property String^ Email
    {
        String^ get()
        {
            return email;
        }
    }

    property String^ Password
    {
        String^ get()
        {
            return password;
        }
        void set(String^ value)
        {
            password = value;
        }
    }
};
#pragma once
using namespace System;

public ref class User 
{

    String^ name;
    String^ password;

public:

    User() {}

    User(String^ name, String^ password)
        : name(name), password(password)
    { }

    property String^ Name 
    {
        String^ get()
        {
            return name;
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
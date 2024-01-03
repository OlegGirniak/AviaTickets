#pragma once
#include "TypeOfTicket.h"

using namespace System;

ref class Plane
{
	String^ placeOfDeparture;
	String^ placeOfArrival;

	String^ departureTime;
	String^ arrivalTime;

	int id;

	int countOfEconomTickets;
	int countOfBusinessTickets;
	int countOfPremiumTickets;


public:

    Plane() {}
    Plane(String^ dep, String^ arr, String^ depTime, String^ arrTime, int planeId, int econTickets, int businessTickets, int premiumTickets)
        : placeOfDeparture(dep), placeOfArrival(arr), departureTime(depTime), arrivalTime(arrTime),
        id(planeId), countOfEconomTickets(econTickets), countOfBusinessTickets(businessTickets),
        countOfPremiumTickets(premiumTickets)
    { }

    property String^ PlaceOfDeparture 
    {
        String^ get()
        {
            return placeOfDeparture;
        }
        void set(String^ value) 
        {
            placeOfDeparture = value;
        }
    }

    property String^ PlaceOfArrival
    {
        String^ get() 
        {
            return placeOfArrival;
        }
        void set(String^ value) 
        {
            placeOfArrival = value;
        }
    }

    property String^ DepartureTime 
    {
        String^ get() 
        {
            return departureTime;
        }
        void set(String^ value) 
        {
            departureTime = value;
        }
    }

    property String^ ArrivalTime
    {
        String^ get()
        {
            return arrivalTime;
        }
        void set(String^ value) {
            arrivalTime = value;
        }
    }

    property int Id 
    {
        int get() 
        {
            return id;
        }
        void set(int value) 
        {
            id = value;
        }
    }

    property int CountOfEconomTickets 
    {
        int get() 
        {
            return countOfEconomTickets;
        }
        void set(int value) 
        {
            countOfEconomTickets = value;
        }
    }

    property int CountOfBusinessTickets 
    {
        int get()
        {
            return countOfBusinessTickets;
        }
        void set(int value) 
        {
            countOfBusinessTickets = value;
        }
    }

    property int CountOfPremiumTickets 
    {
        int get() 
        {
            return countOfPremiumTickets;
        }
        void set(int value) 
        {
            countOfPremiumTickets = value;
        }
    }
};


#pragma once
#include "TypeOfTicket.h"

using namespace System;

ref class Plane
{
    int id;

	String^ placeOfDeparture;
	String^ placeOfArrival;

	String^ departureTime;
	String^ arrivalTime;



	int countOfEconomTickets;
	int countOfBusinessTickets;
	int countOfPremiumTickets;


public:

    Plane() {}
    Plane(int id) : id(id) { }
    Plane(int id, String^ placeOfDeparture, String^ placeOfArrival, String^ departureTime, String^ arrivalTime,
         int countOfEconomTickets, int countOfBusinessTickets, int countOfPremiumTickets)

        : id(id), placeOfDeparture(placeOfDeparture), placeOfArrival(placeOfArrival), departureTime(departureTime), arrivalTime(arrivalTime),
        countOfEconomTickets(countOfEconomTickets), countOfBusinessTickets(countOfEconomTickets), countOfPremiumTickets(countOfPremiumTickets)
    { }

    Plane(String^ placeOfDeparture, String^ placeOfArrival, String^ departureTime, String^ arrivalTime,
        int countOfEconomTickets, int countOfBusinessTickets, int countOfPremiumTickets)

        : id(-1), placeOfDeparture(placeOfDeparture), placeOfArrival(placeOfArrival), departureTime(departureTime), arrivalTime(arrivalTime),
        countOfEconomTickets(countOfEconomTickets), countOfBusinessTickets(countOfEconomTickets), countOfPremiumTickets(countOfPremiumTickets)
    { }

    static bool operator==(Plane^ left, Plane^ right)
    {
        // Порівнюємо за id
        return (left != nullptr && right != nullptr && left->id == right->id);
    }

    static bool operator!=(Plane^ left, Plane^ right)
    {
        return !(left == right);
    }

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


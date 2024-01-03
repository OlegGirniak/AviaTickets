#pragma once
#include "TypeOfTicket.h"

using namespace System;

ref class Ticket
{

	String^ placeOfDeparture;
	String^ placeOfArrival;

	String^ departureTime;
	String^ arrivalTime;

	int price;
    int id;
    int planeId;
    int place;

	TypeOfTicket typeOfTicket;

public:

    Ticket() {}
    Ticket(String^ placeOfDeparture, String^ placeOfArrival, String^ departureTime, String^ arrivalTime, 
           int price, int id, int planeId, int place,TypeOfTicket typeOfTicket)
        : placeOfDeparture(placeOfDeparture), placeOfArrival(placeOfArrival), departureTime(departureTime),
          arrivalTime(arrivalTime), price(price), typeOfTicket(typeOfTicket), id(id), planeId(planeId), place(place)
    { }

    property String^ PlaceOfDeparture {
        String^ get() {
            return placeOfDeparture;
        }
        void set(String^ value) {
            placeOfDeparture = value;
        }
    }

    property String^ PlaceOfArrival {
        String^ get() {
            return placeOfArrival;
        }
        void set(String^ value) {
            placeOfArrival = value;
        }
    }

    property String^ DepartureTime {
        String^ get() {
            return this->departureTime;
        }
        void set(String^ value) {
            departureTime = value;
        }
    }

    property String^ ArrivalTime {
        String^ get() {
            return arrivalTime;
        }
        void set(String^ value) {
            arrivalTime = value;
        }
    }

    property int Price {
        int get() {
            return price;
        }
        void set(int value) {
            price = value;
        }
    }

    property TypeOfTicket TypeTicket
    {
        TypeOfTicket get() 
        {
            return typeOfTicket;
        }

        void set(TypeOfTicket value)
        {
            typeOfTicket = value;
        }
    }

};
#include "Itinerary.h"
#include <iostream>
using namespace std;

Itinerary::Itinerary()
{
	ItineraryNo = "I0000";
	startDate = "DD/MM/YYYY";
	location = "";
	endDate = "DD/MM/YYYY";
	returnedDate = "DD/MM/YYYY";
}


Itinerary::Itinerary(string I_No, Vehicle* Vehicle, string I_startDate, Driver* Driver, string I_location, string I_endDate, string I_returnedDate)
{
	ItineraryNo = I_No;
	V = Vehicle;
	startDate = I_startDate;
	D = Driver;
	location = I_location;
	endDate = I_endDate;
	returnedDate = I_returnedDate;
}

void Itinerary::addNewItinerary()
{
}

void Itinerary::deleteItinerary()
{
}

void Itinerary::displayItineraryDetails()
{
}

void Itinerary::confirmRental()
{
}

void Itinerary::confirmReturn()
{
}

Itinerary::~Itinerary()
{
	cout << "Destructor running for Itinerary" << endl;
}

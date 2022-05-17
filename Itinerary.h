#pragma once
#include <string>
#include "Vehicle.h"
#include "Driver.h"
using namespace std;


class Itinerary
{
private :
	string ItineraryNo;
	Vehicle* V;
	Driver* D;
	string startDate;
	string location;
	string endDate;
	string returnedDate;

public :
	Itinerary();
	Itinerary(string I_No, Vehicle* Vehicle, string I_startDate, Driver* Driver, string I_location, string I_endDate, string I_returnedDate);
	void addNewItinerary();
	void deleteItinerary();
	void displayItineraryDetails();
	void confirmRental();
	void confirmReturn();
	~Itinerary();
};


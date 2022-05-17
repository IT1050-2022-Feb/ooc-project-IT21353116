#pragma once
#include <string>
#include "Customer.h"
#include "Itinerary.h"
using namespace std;

class Reservation
{
private :
	string reservationNo;
	string reservedDate;
	Customer* c;
	Itinerary* i;
	

public :
	Reservation();
	Reservation(string R_No, string R_date, Customer* Cus, Itinerary* Iti);
	void addReservation();
	void deleteReservation();
	void displayReservationDetails();
	~Reservation();
};


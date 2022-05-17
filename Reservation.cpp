#include "Reservation.h"
#include <iostream>
using namespace std;

Reservation::Reservation()
{
	reservationNo = "R0000";
	reservedDate = "DD/MM/YYYY";
	i = new Itinerary();
}

Reservation::Reservation(string R_No, string R_date, Customer* Cus, Itinerary* Iti)
{
	reservationNo = R_No;
	reservedDate = R_date;
	c = Cus;
	i = Iti;
}

void Reservation::addReservation()
{
}

void Reservation::deleteReservation()
{
}

void Reservation::displayReservationDetails()
{
}

Reservation::~Reservation()
{
	delete i;
	cout << "Destructor running for Reservation" << endl;
}

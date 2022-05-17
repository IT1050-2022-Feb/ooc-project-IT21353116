#pragma once
#include "Customer.h"
#include "Agent.h"
#include "Driver.h"
#include "Vehicle.h"
#include "Itinerary.h"
#include "Reservation.h"
#include "Payment.h"
#include <string>
using namespace std;

class Report
{
private :
	int reportNo;
	string reportDate;

public :
	Report();
	Report(int rprtNo, string rprt_date);
	void generate_Customer_Report(Customer* c);
	void generate_Agent_Report(Agent* a);
	void generate_Driver_Report(Driver* d);
	void generate_Vehicle_Report(Vehicle* v);
	void generate_List_Of_Itineraries(Itinerary* i);
	void generate_List_Of_Reservations(Reservation* r);
	void generate_List_Of_DriverAppointments(Itinerary* i);
	void generate_Payment_Report(Payment* p);
	void refineReport();
	void displayReport();
	~Report();
};


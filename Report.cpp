#include "Report.h"
#include <iostream>
using namespace std;

Report::Report()
{
	reportNo = 0;
	reportDate = "DD/MM/YYYY";
}

Report::Report(int rprtNo, string rprt_date)
{
	reportNo = rprtNo;
	reportDate = rprt_date;
}

void Report::generate_Customer_Report(Customer* c)
{
}

void Report::generate_Agent_Report(Agent* a)
{
}

void Report::generate_Driver_Report(Driver* d)
{
}

void Report::generate_Vehicle_Report(Vehicle* v)
{
}

void Report::generate_List_Of_Itineraries(Itinerary* i)
{
}

void Report::generate_List_Of_Reservations(Reservation *r)
{
}

void Report::generate_List_Of_DriverAppointments(Itinerary* i)
{
}

void Report::generate_Payment_Report(Payment* p)
{
}

void Report::refineReport()
{
}

void Report::displayReport()
{
}

Report::~Report()
{
	cout << "Destructor running for Report" << endl;
}

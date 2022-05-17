#include <iostream>
#include "Agent.h"
#include "Customer.h"
#include "Driver.h"
#include "Contract.h"
#include "Guest.h"
#include "Itinerary.h"
#include "Person.h"
#include "Payment.h"
#include "Reservation.h"
#include "Report.h"
#include "Vehicle.h"
#include <string>
using namespace std;

int main() {

	//Creating Objects

	Customer* c = new Customer();
	Agent* a = new Agent();
	Driver* d = new Driver();
	Vehicle* v = new Vehicle();
	Contract* cntrct = new Contract();
	Reservation* r = new Reservation();
	Itinerary* i = new Itinerary();
	Payment* pymnt = new Payment();
	Report* rprt = new Report();
	Person* p = new Person();
	Guest* g = new Guest();


	//Deleting Objects

	delete c;
	delete a;
	delete d;
	delete v;
	delete cntrct;
	delete r;
	delete i;
	delete pymnt;
	delete rprt;
	delete p;
	delete g;

	return 0;
}
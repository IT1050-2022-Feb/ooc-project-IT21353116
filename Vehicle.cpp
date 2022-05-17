#include "Vehicle.h"
#include <iostream>
using namespace std;

Vehicle::Vehicle()
{
	vehicleID = "V000";
	regNo = "";
	type = "";
	brand = "";
	capacity = 0;
	chargePerKm = 0;
}

Vehicle::Vehicle(string vID, string v_regNo, string v_type, string v_brand, int v_capacity, double v_charge)
{
	vehicleID = vID;
	regNo = v_regNo;
	type = v_type;
	brand = v_brand;
	capacity = v_capacity;
	chargePerKm = v_charge;
}

void Vehicle::addVehicle()
{
}

void Vehicle::removeVehicle()
{
}

void Vehicle::updateVehicleDetails()
{
}

void Vehicle::displayVehicleDetails()
{
}

void Vehicle::updateVehicleSatus()
{
}

Vehicle::~Vehicle()
{
	cout << "Destructor running for Vehicle" << endl;
}

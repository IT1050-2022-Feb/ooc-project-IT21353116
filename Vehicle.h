#pragma once
#include <string>
using namespace std;

class Vehicle
{
private :
	string vehicleID;
	string regNo;
	string type;
	string brand;
	int capacity;
	double chargePerKm;

public :
	Vehicle();
	Vehicle(string vID, string v_regNo, string v_type, string v_brand, int v_capacity, double v_charge);
	void addVehicle();
	void removeVehicle();
	void updateVehicleDetails();
	void displayVehicleDetails();
	void updateVehicleSatus();
	~Vehicle();
};

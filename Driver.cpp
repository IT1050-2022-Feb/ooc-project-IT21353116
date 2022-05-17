#include "Driver.h"
#include <iostream>
#include <string>
using namespace std;

Driver::Driver()
{
	driverID = "D000";
	LicenseNo = "";
}

Driver::Driver(string dID, string pID, string d_name, string d_address, string d_DOB, string d_email, string d_license)
{
	driverID = dID;
	personID = pID;
	Name = d_name;
	Address = d_address;
	DOB = d_DOB;
	Email = d_email;
	LicenseNo = d_license;
}

void Driver::addDriver()
{
}

void Driver::removeDriver()
{
}

void Driver::updateDriverDetails()
{
}

void Driver::displayDriverDetails()
{
}

Driver::~Driver()
{
	cout << "Destructor running for Driver" << endl;
}

#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Driver : public Person
{
private :
	string driverID;
	string LicenseNo;

public :
	Driver();
	Driver(string dID, string pID, string d_name, string d_address, string d_DOB, string d_email, string d_license);
	void addDriver();
	void removeDriver();
	void updateDriverDetails();
	void displayDriverDetails();
	~Driver();
};


#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Customer : public Person
{
private:
	string customerID;
	string LicenseNo;

public :
	Customer();
	Customer(string cID, string pID, string c_name, string c_address, string c_DOB, string c_email, string c_license);
	void addCustomer();
	void deleteCustomer();
	void updateCustomerDetails();
	void displayCustomerDetails();
	void makeReservation();
	void cancelReservation();
	~Customer();
};


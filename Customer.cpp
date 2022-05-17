#include "Customer.h"
#include <iostream>
#include <string>
using namespace std;

Customer::Customer() {
	customerID = "C000";
	LicenseNo = "";
}

Customer::Customer(string cID, string pID, string c_name, string c_address, string c_DOB, string c_email, string c_license)
{
	customerID = cID;
	personID = pID;
	Name = c_name;
	Address = c_address;
	DOB = c_DOB;
	Email = c_email;
	LicenseNo = c_license;
}

void Customer::addCustomer() {

}

void Customer::deleteCustomer() {

}

void Customer::updateCustomerDetails() {

}
void Customer::displayCustomerDetails() {
	cout << "CustomerID : " << customerID << endl;
	displayDetails();
	cout << "LicenseNo : " << LicenseNo << endl;
}

void Customer::makeReservation() {

}

void Customer::cancelReservation() {

}

Customer::~Customer() {
	cout << "Destructor running for Customer" << endl;
}
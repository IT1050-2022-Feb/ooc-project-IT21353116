#include "Person.h"
#include <iostream>
#include <string>
using namespace std;

Person::Person() {
	personID = "P000";
	Name = "";
	Address = "";
	DOB = "DD/MM/YYYY";
	Email = "";
}

Person::Person(string pID, string p_name, string p_address, string p_DOB, string p_email)
{
	personID = pID;
	Name = p_name;
	Address = p_address;
	DOB = p_DOB;
	Email = p_email;
}

void Person::addPerson() {

}

void Person::deletePerson() {

}

void Person::updatePersonDetails() {

}

void Person::displayDetails() {
	cout << "PersonID : " << personID << endl;
	cout << "Name : " << Name << endl;
	cout << "Address : " << Address << endl;
}

void Person::login() {

}

void Person::logout() {

}

void Person::searchVehicle() {

}

void Person::suggestVehicle() {

}

Person::~Person() {
	cout << "Destructor running for Person" << endl;
}
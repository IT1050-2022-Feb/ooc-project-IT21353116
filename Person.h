#pragma once
#include <string>
using namespace std;

class Person
{
protected :
	string personID ;
	string Name;
	string Address;
	string DOB;
	string Email;

public : 
	Person();
	Person(string pID, string p_name, string p_address, string p_DOB, string p_email);
	void addPerson();
	void deletePerson();
	void updatePersonDetails();
	void displayDetails();
	void login();
	void logout();
	void searchVehicle();
	void suggestVehicle();
	~Person();
};


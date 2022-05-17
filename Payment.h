#pragma once
#include <string>
#include "Itinerary.h"
using namespace std;


class Payment
{
private :
	string billNo;
	Itinerary* i;
	double billAmount;
	string customerID;
	string paymentDate;

public :
	Payment();
	Payment(string bill, double amount, string cID, string billDate, Itinerary* I);
	void newPayment();
	void calculateBill();
	void displayPayemntDetails();
	void validatePayment();
	void confirmPayment();
	~Payment();
};

#include "Contract.h"
#include <iostream>
using namespace std;

Contract::Contract()
{
	contractNo = "000000";
	startDate = "DD/MM/YYYY";
	endDate = "DD/MM/YYYY";
}

Contract::Contract(string cntrct_No, Agent* Agent, Vehicle* Vehicle, string cntrct_startDate, string cntrct_endDate)
{
	contractNo = cntrct_No;
	a = Agent;
	v = Vehicle;
	startDate = cntrct_startDate;
	endDate = cntrct_endDate;
}

void Contract::addNewContract()
{
}

void Contract::deleteContract()
{
}

void Contract::displayContractDetails()
{
}

Contract::~Contract()
{
	cout << "Destructor running for Contract" << endl;
}

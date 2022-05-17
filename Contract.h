#pragma once
#include "Agent.h"
#include "Vehicle.h"
#include <string>
using namespace std;

class Contract
{
private :
	string contractNo;
	Agent* a;
	Vehicle* v;
	string startDate;
	string endDate;

public :
	Contract();
	Contract(string cntrct_No, Agent* Agent, Vehicle* Vehicle, string cntrct_startDate, string cntrct_endDate);
	void addNewContract();
	void deleteContract();
	void displayContractDetails();
	~Contract();
};


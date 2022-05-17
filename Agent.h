#pragma once
#include "Person.h"
#include <string>
using namespace std;

class Agent : public Person
{
private :
	string agentID;
	double commission;

public :
	Agent();
	Agent(string aID, string pID, string a_name, string a_address, string a_DOB, string a_email, double a_commission);
	void addAgent();
	void removeAgent();
	void updateAgentDetails();
	void displayAgentDetails();
	~Agent();
};


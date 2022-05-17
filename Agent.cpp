#include "Agent.h"
#include <iostream>
#include <string>
using namespace std;

Agent::Agent()
{
	agentID = "A000";
	commission = 0;
}

Agent::Agent(string aID, string pID, string a_name, string a_address, string a_DOB, string a_email, double a_commission)
{
	agentID = aID;
	personID = pID;
	Name = a_name;
	Address = a_address;
	DOB = a_DOB;
	Email = a_email;
	commission = a_commission;
}

void Agent::addAgent() {

}

void Agent::removeAgent() {

}

void Agent::updateAgentDetails() {

}

void Agent::displayAgentDetails() {

}

Agent::~Agent() {
	cout << "Destructor running for Agent" << endl;
}

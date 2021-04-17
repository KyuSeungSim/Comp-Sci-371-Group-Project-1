#include <iostream>
#include <iomanip>
#include <string>
#include "Scheduling.h"
using namespace std;

/*To  any  destination,  the  company  intends  to  operate  at  least  3  services   a  week
to  and  from  any  destination. However, depending on the demand, the company can operate extra
service providing that there is a bus available.
The demand should meet at least 50% of particular bus type.
When you schedule  one  bus  for  a  particular  destination,  make  sure  you  have  an  available
bus  at  that  depot.  You  have  11  buses  and  6  destinations.  Therefore,  depending  on  the  passengers’  reservation,
there  must be one bus available to complete the travel.
You may consider keeping an inventory of vehicles located in different depots. */

/*
Source		Destination		Distance
Green Bay	Madison			135.6 miles
Green Bay	Milwaukee		118.7 miles
Green Bay	Whitewater		142.2 miles
Green Bay	Oshkosh			50.4 miles
Green Bay	Eau Claire		194.4 miles
*/

/* 
Scheduling
-------------
Demand
11 bus           - You  have  11  buses
6 destination    - 6  destinations.
-------------
weekCheck        - To  any  destination,  the  company  intends  to  operate  at  least  3  services   a  week to  and  from  any  destination.
MinimumCheck     - The demand should meet at least 50% of particular bus type.
DemandCheck      - depending on the demand, the company can operate extra service providing that there is a bus available.
reservationCheck - Therefore,  depending  on  the  passengers’  reservation, there  must be one bus available to complete the travel.
busListCheck     - You may consider keeping an inventory of vehicles located in different depots.
*/

// Constructor
Scheduling::Scheduling(int activeLuxuryBusInput, int activeMiniBusInput,
						int activeMiniBanInput, int activeTotalBusInput)
{
	luxuryBus = 3;
	miniBus = 4;
	miniBan = 4;
	busTotal = 11;
	activeState = 0;
	activeTotalBus = activeTotalBusInput;
	activeLuxuryBus = activeLuxuryBusInput;
	activeMiniBus = activeMiniBusInput;
	activeMiniBan = activeMiniBanInput;


}

string Scheduling::getBusType(int busTypeInput)
{
	if (busTypeInput == 1)
	{
		return "Luxury Bus";
	}
	else if (busTypeInput == 2)
	{
		return "Mini Bus";
	}
	else if (busTypeInput == 3)
	{
		return "Mini Ban";
	}
	else 
	{
		return "Invalid Input!";
	}
}

int Scheduling::getActiveLuxuryBus()
{
	return activeLuxuryBus;
}

int Scheduling::getActiveMiniBus()
{
	return activeMiniBus;
}

int Scheduling::getActiveMiniBan()
{
	return activeMiniBan;
}

// To  any  destination,  the  company  intends  to  operate  at  least  3  services   a  week
void Scheduling::weekCheck(int weekInput)
{
	if (activeTotalBus < 3)
	{
		activeState = 0;
		cout << "We have " << weekInput << "th week, No Schedule" << endl;
	}
	else
	{
		activeState = 1;
		cout << "We have " << weekInput << "th week, " << activeTotalBus << " Schedule" << endl;
	}
}

void Scheduling::demandCheck(int busTypeInput)
{
	if (busTypeInput == 1)
	{
		//if (reservation.size >= 26)
		//{
		//	ActiveLuxurybus++;
		//}
	}
	else if (busTypeInput == 2)
	{
		//if (reservation.size >= 18)
		//{
		//	ActiveMiniBus++;
		//}
	}
	else if (busTypeInput == 3)
	{
		//if (reservation.size >= 6)
		//{
		//	ActiveMiniBan++;
		//}
	}
}

bool Scheduling::minimumCheck(int reservationSize)
{

}

void Scheduling::reservationCheck()
{

}

void Scheduling::busListCheck()
{

	cout << "\t Bus List View\t" << endl;
	cout << "Bus Total: " << 11 << endl;
	cout << endl;

	cout << "Current Bus List" << endl;
	cout << endl;

	cout << "Luxury Bus" << endl;
	cout << "Active: " << activeLuxuryBus;
	cout << ", Remain: " << 3 - activeLuxuryBus << endl;
	cout << endl;
	
	cout << "Mini Bus" << endl;
	cout << "Active: " << activeMiniBus;
	cout << ", Remain: " << 4 - activeMiniBus << endl;
	cout << endl;

	cout << "Mini Van" << endl;
	cout << "Active: " << activeMiniBan;
	cout << ", Remain: " << 4 - activeMiniBan << endl;
	cout << endl;
}

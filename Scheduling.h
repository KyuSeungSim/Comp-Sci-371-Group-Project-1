#pragma once
#ifndef SCHEDULING_H
#define SCHEDULING_H
using namespace std;

class Scheduling
{
private:
	int busType;			// 1 = LuxuryBus, 2 = MiniBus, 3 = MiniBan
	int luxuryBus;
	int miniBus;
	int miniBan;
	int busTotal;
	int activeLuxuryBus;
	int activeMiniBus;
	int activeMiniBan;
	int activeTotalBus;
	int activeState;		// 0 = No active, 1 = active
public:
	Scheduling(int, int, int, int);
	string getBusType(int);
	int getActiveLuxuryBus();
	int getActiveMiniBus();
	int getActiveMiniBan();

	void weekCheck(int);
	bool minimumCheck(int);
	void demandCheck(int);
	void reservationCheck();
	void busListCheck();
};
#endif

#ifndef Time_h
#define Time_h

#include <iostream>
#include <string>
using namespace std;

class Time {
	int hour, minute, second;
public:
	Time(int h, int m, int s);
	int getHour();
	
	int getMinute();
	int getSecond();
	void setHour(int h);
	void setMinute(int m);
	void setSecond(int s);


	Time nextSecond();
	Time previousSecond();
	string showTime();
};
#endif
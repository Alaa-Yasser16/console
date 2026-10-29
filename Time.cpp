#include <iostream>
#include <string>
#include"Time.h"
using namespace std;



	Time::Time(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
	}
	int Time::getHour()
	{
		return hour;
	}
	int Time::getMinute() {
		return minute;
	}
	int Time::getSecond() {
		return second;
	}
	void Time::setHour(int h) {
		hour = h;
	}
	void Time::setMinute(int m) {
		minute = m;
	}
	void Time::setSecond(int s) {
		second = s;
	}


	Time Time::nextSecond()
	{
		second++;
		if (second >= 60) {
			second = 0;
			minute++;
			if (minute >= 60) {
				minute = 0;
				hour++;
				if (hour >= 24)
					hour = 0;
			}

		}
		return Time(hour, minute, second);
	}
	Time Time:: previousSecond() {
		second--;
		if (second < 0) {
			second = 59;
			minute--;

			if (minute < 0) {
				minute = 59;
				hour--;
				if (hour < 0) {
					hour = 23;
				}
			}
		}
		return Time(hour, minute, second);
	}
	string Time::showTime() {
		string h = to_string(hour);
		string m = to_string(minute);
		string s = to_string(second);

		if (hour < 10)
			h = "0" + h;

		if (minute < 10)
			m = "0" + m;
		if (second < 10)
			s = "0" + s;

		return h + ":" + m + ":" + s;
	}

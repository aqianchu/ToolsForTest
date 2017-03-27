#pragma once
#include <time.h>
#include <stdio.h>

struct tagDate
{
	int year;
	int month;
	int day;
};

long DateDiff(tagDate date1, tagDate date2);
time_t StringToDatetime(char *str);
long StringToMs(char*str);
SYSTEMTIME TimetToSystemTime(time_t t);
time_t SystemTimeToTimet(SYSTEMTIME st);
SYSTEMTIME Time_tToSystemTime(time_t t);
time_t SystemTimeToTime_t(const SYSTEMTIME& st);
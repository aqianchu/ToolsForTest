#pragma once
#include "stdafx.h"
#include "IntUtils.h"



//设置日期  
void SetDate(int y, int m, int d, tagDate *date)
{
	date->year = y;
	date->month = m;
	date->day = d;
}

//是否闰年  
int IsLeapYear(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0) || year % 400 == 0);
}

//得到date.month的最大天数  
int GetLastDay(tagDate date)
{
	int num;
	switch (date.month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		num = 31;
		break;
	case 2:
		num = 28 + IsLeapYear(date.year);
		break;
	default:
		num = 30;
	}
	return num;
}

//日期是否合法  
int IsDateValid(tagDate date)
{
	if (date.year <0 || date.month <1 || date.month> 12)
		return 0;

	if (date.day <1 || date.day> GetLastDay(date))
		return 0;

	return 1;
}

//date+1  
void AddDay(tagDate *date)
{
	date->day++;
	if (date->day > GetLastDay(*date))
	{
		date->day = 1;
		date->month++;
		if (date->month > 12)
		{
			date->month = 1;
			date->year++;
		}
	}
}

//date1比date2小返回值为1，否则为0  
int Compare(tagDate date1, tagDate date2)
{
	if (date1.year < date2.year)
		return 1;
	if (date1.year <= date2.year && date1.month < date2.month)
		return 1;
	if (date1.year <= date2.year && date1.month <= date2.month && date1.day < date2.day)
		return 1;

	return 0;
}
//计算两个日期的间隔天数  
long DateDiff(tagDate date1, tagDate date2)
{
	long delta = 0;
	tagDate date3;
	//若date1 > date2,交换date1,date2  
	if (!Compare(date1, date2))
	{
		date3 = date2;
		date2 = date1;
		date1 = date3;
	}

	//date1比date2少时，date1日期加1  
	while (Compare(date1, date2))
	{
		AddDay(&date1);
		delta++;
	}
	return delta;
}

time_t StringToDatetime(char *str)
{
	tm tm_;
	int year, month, day, hour, minute, second;
	sscanf(str, "%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);
	tm_.tm_year = year - 1900;
	tm_.tm_mon = month - 1;
	tm_.tm_mday = day;
	tm_.tm_hour = hour;
	tm_.tm_min = minute;
	tm_.tm_sec = second;
	tm_.tm_isdst = 0;
	time_t t_ = mktime(&tm_); //已经减了8个时区  
	return t_; //秒时间  
}

long StringToMs(char*str)
{
	int year, month, day, hour, minute, second;
	sscanf(str, "%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);
	tagDate date1,date2;
	date1.year = 1970; date1.month = 1; date1.day = 1;
	date2.year = year; date2.month = month; date2.day = day;
	long count = DateDiff(date1, date2);
	long result = count * 24 * 60 * 60 * 1000;// +hour * 60 * 60 * 1000 + minute * 60 * 1000 + second * 1000;
	return result;
}

SYSTEMTIME TimetToSystemTime(time_t t)
{
	FILETIME ft;
	SYSTEMTIME pst;
	LONGLONG nLL = Int32x32To64(t, 10000000) + 116444736000000000;
	ft.dwLowDateTime = (DWORD)nLL;
	ft.dwHighDateTime = (DWORD)(nLL >> 32);
	FileTimeToSystemTime(&ft, &pst);
	return pst;
}

time_t SystemTimeToTimet(SYSTEMTIME st)

{
	FILETIME ft;
	SystemTimeToFileTime(&st, &ft);
	LONGLONG nLL;
	ULARGE_INTEGER ui;
	ui.LowPart = ft.dwLowDateTime;
	ui.HighPart = ft.dwHighDateTime;
	nLL = (ft.dwHighDateTime << 32) + ft.dwLowDateTime;
	time_t pt = (long)((LONGLONG)(ui.QuadPart - 116444736000000000) / 10000000);
	return pt;
}

SYSTEMTIME Time_tToSystemTime(time_t t)

{
	tm temptm = *localtime(&t);
	SYSTEMTIME st = { 1900 + temptm.tm_year,
		1 + temptm.tm_mon,
		temptm.tm_wday,
		temptm.tm_mday,
		temptm.tm_hour,
		temptm.tm_min,
		temptm.tm_sec,
		0 };
	return st;
}

time_t SystemTimeToTime_t(const SYSTEMTIME& st)
{
	tm temptm = { st.wSecond,
		st.wMinute,
		st.wHour,
		st.wDay,
		st.wMonth - 1,
		st.wYear - 1900,
		st.wDayOfWeek,
		0,
		0 };
	return mktime(&temptm);
}
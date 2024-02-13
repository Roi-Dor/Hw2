#include <stdio.h>
#include <stdlib.h>
#include "Date.h"

void inputDate(Date* date,int day,int month, int year) {
	if(day<1||)
	date->month = month;
	date->day = day;
	date->year = year;
}
int compareDate(Date date1, Date date2);
int getDay(Date date);
int getMonth(Date date);
int getYear(Date date);
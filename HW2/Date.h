#ifndef Date_h
#define Date_h
typedef struct
{
    int day;
    int month;
    int year;
}Date;
void inputDate(Date* date, int day, int month, int year);
int compareDate(Date date1, Date date2);
int getDay(Date date);
int getMonth(Date date);
int getYear(Date date);
#endif

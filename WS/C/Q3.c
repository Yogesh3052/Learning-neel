#include<stdio.h>
#include<time.h>

int main()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("seconds = %d\n",tm.tm_sec);
    printf("Minutes = %d\n",tm.tm_min);
    printf("Hour = %d\n",tm.tm_hour);
    printf("day of month = %d\n",tm.tm_mday);
    printf("month of year = %d\n",tm.tm_mon+1);
    printf("year = %d\n",tm.tm_year+1900);
    printf("weekday = %d\n",tm.tm_wday);
    printf("day of year = %d\n",tm.tm_yday);
    printf("daylight savings = %d\n",tm.tm_isdst);
    printf("Current Date: %d-%02d-%02d\n",tm.tm_mday, tm.tm_mon + 1,tm.tm_year + 1900);
    printf("Current Time: %02d:%02d:%02d\n", tm.tm_hour, tm.tm_min, tm.tm_sec);
   
    
}
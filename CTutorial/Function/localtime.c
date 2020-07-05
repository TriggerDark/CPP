#include <stdio.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm *timeinfo;
    rawtime = time(NULL);
    timeinfo = localtime(&rawtime);
    printf("Current local time and date:%s", asctime(timeinfo));

    printf("year :%d\n", timeinfo->tm_year+1900);
    printf("month:%d\n", timeinfo->tm_mon+1);
    printf("day  :%d\n", timeinfo->tm_mday);
    printf("hour :%d\n", timeinfo->tm_hour);
    printf("min  :%d\n", timeinfo->tm_min);
    printf("sec  :%d\n", timeinfo->tm_sec);
    return 0;
}

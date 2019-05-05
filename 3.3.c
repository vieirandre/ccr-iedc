/* 
 * To write a program that receives the number of seconds elapsed in a given 
 * event and prints the time in the hours-minutes-seconds format, where both 
 * hours and minutes are exhibited with two digits and leading zeros, and 
 * seconds are exhibited with two decimal places, also with leading zeros.
 */

#include <stdio.h>

int main(void) {
    int secondsInHour = 3600, secondsInMinute = 60;
    int seconds, hours, minutes;

    printf("Number of seconds: ");
    scanf("%d", &seconds); getchar();

    hours = seconds / secondsInHour;
    seconds -= hours * secondsInHour;
    minutes = seconds / secondsInMinute;
    seconds -= minutes * secondsInMinute;

    printf("%02dh:%02dm:%05.2fs", hours, minutes, (float)seconds);
    
    getchar();
    return 0;
}
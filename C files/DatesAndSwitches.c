#include <stdio.h>

// gcc DatesAndSwitches.c -o SwitchDates
// Converts numerical Date form into written date form
int main(){

int month;
int year;
int day;

// char MonthDisplay[8] = "October";

printf("Enter Date that you wish to convert: ");
scanf("%d/ %d/ %d", &day, &month, &year);

switch (month)
{
case 1:
    printf("January");
    break;
case 2:
    printf("February");
    break;
case 3:
    printf("March");
    break;
case 4:
    printf("April");
    break;
case 5:
    printf("May");
    break;
case 6:
    printf("June");
    break;
case 7:
    printf("July");
    break;
case 8:
    printf("August");
    break;
case 9:
    printf("September");
    break;
case 10:
    printf("October");
    break;
case 11:
    printf("November");
    break;
case 12:
    printf("December");
    break;

default:
    printf("Do you fucking live in mars??\nThere are only 12 months moron");
    break;
}

/*switch (day)
{
case 1:
    printf(" %dst,", day);
    break;
case 2:
    printf(" %dnd,", day);
    break;
case 3:
    printf(" %drd,", day);
    break;
default:
    printf(" %dst,", day);
    break;
}*/

if (day == 1 || day == 21 || day == 31)
{
    printf(" %ist,", day);
}else if (day == 2 || day == 22)
{
    printf(" %ind,", day);
}else if (day == 3 || day == 23)
{
    printf(" %ird,", day);
}else
{
    printf(" %ith,", day);
}





printf(" %d.", year);
}


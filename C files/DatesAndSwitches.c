#include <stdio.h>

// gcc DatesAndSwitches.c -o SwitchDates
// Converts numerical Date form into written date form
int main(){


int month;
// int year;
int day;
char year_1;
char year_2;
char year_3;
char year_4;
// char MonthDisplay[8] = "October";

printf("Enter Date that you wish to convert: ");
scanf("%d/ %d/ %c%c%c%c", &day, &month, &year_1, &year_2, &year_3, &year_4);

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
    printf(" %ist, ", day);
}else if (day == 2 || day == 22)
{
    printf(" %ind, ", day);
}else if (day == 3 || day == 23)
{
    printf(" %ird, ", day);
}else
{
    printf(" %ith, ", day);
}





//printf(" %d.", year);

switch (year_1)
{
case '1':
    printf("One");
    printf(" thousand ");
    break;
case '2':
    printf("Two");
    printf(" thousand ");
    break;
case '3':
    printf("Three");
    printf(" thousand ");
    break;
case '4':
    printf("Four");
    printf(" thousand ");
    break;
case '5':
    printf("Five");
    printf(" thousand ");
    break;
case '6':
    printf("Six");
    printf(" thousand ");
    break;
case '7':
    printf("Seven");
    printf(" thousand ");
    break;
case '8':
    printf("Eight");
    printf(" thousand ");
    break;
case '9':
    printf("Nine");
    printf(" thousand ");
    break;
case '0':
    break;
default:
    break;
}

switch (year_2)
{
case '1':
    printf("One");
    printf(" Hundred and ");
    break;
case '2':
    printf("Two");
    printf(" Hundred and ");
    break;
case '3':
    printf("Three");
    printf(" Hundred and ");
    break;
case '4':
    printf("Four");
    printf(" Hundred and ");
    break;
case '5':
    printf("Five");
    printf(" Hundred and ");
    break;
case '6':
    printf("Six");
    printf(" Hundred and ");
    break;
case '7':
    printf("Seven");
    printf(" Hundred and ");
    break;
case '8':
    printf("Eight");
    printf(" Hundred and ");
    break;
case '9':
    printf("Nine");
    printf(" Hundred and ");
    break;
case '0':
    printf("and ");
    break;
default:
    break;
}

if (year_3 == '1')
{
    switch (year_4)
    {
    case '0':
        printf("ten");
        break;
    case '1':
        printf("eleven");
        break;
    case '2':
        printf("twleve");
        break;
    case '3':
        printf("thirteen");
        break;
    case '4':
        printf("fourteen");
        break;
    case '5':
        printf("fifteen");
        break;
    case '6':
        printf("sixteen");
        break;
    case '7':
        printf("seventeen");
        break;
    case '8':
        printf("eighteen");
        break;
    case '9':
        printf("nineteen");
        break;
    
    default:
        break;
    }
}else if (year_3 == '2' )
{
    printf("Twenty ");
    switch (year_4)
    {
    case '0':
        break;
    case '1':
        printf("one");
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    case '5':
        printf("five");
        break;
    case '6':
        printf("six");
        break;
    case '7':
        printf("seven");
        break;
    case '8':
        printf("eight");
        break;
    case '9':
        printf("nine");
        break;
    
    default:
        break;
    }
}else if (year_3 == '3' )
{
    printf("Thirty ");
    switch (year_4)
    {
    case '0':
        break;
    case '1':
        printf("one");
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    case '5':
        printf("five");
        break;
    case '6':
        printf("six");
        break;
    case '7':
        printf("seven");
        break;
    case '8':
        printf("eight");
        break;
    case '9':
        printf("nine");
        break;
    
    default:
        break;
    }
}else if (year_3 == '4' )
{
    printf("Forty ");
    switch (year_4)
    {
    case '0':
        break;
    case '1':
        printf("one");
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    case '5':
        printf("five");
        break;
    case '6':
        printf("six");
        break;
    case '7':
        printf("seven");
        break;
    case '8':
        printf("eight");
        break;
    case '9':
        printf("nine");
        break;
    
    default:
        break;
    }
}else if (year_3 == '5' )
{
    printf("Fifty ");
    switch (year_4)
    {
    case '0':
        break;
    case '1':
        printf("one");
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    case '5':
        printf("five");
        break;
    case '6':
        printf("six");
        break;
    case '7':
        printf("seven");
        break;
    case '8':
        printf("eight");
        break;
    case '9':
        printf("nine");
        break;
    
    default:
        break;
    }
}else if (year_3 == '6' )
{
    printf("sixty ");
    switch (year_4)
    {
    case '0':
        break;
    case '1':
        printf("one");
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    case '5':
        printf("five");
        break;
    case '6':
        printf("six");
        break;
    case '7':
        printf("seven");
        break;
    case '8':
        printf("eight");
        break;
    case '9':
        printf("nine");
        break;
    
    default:
        break;
    }
}else if (year_3 == '7' )
{
    printf("seventy ");
    switch (year_4)
    {
    case '0':
        break;
    case '1':
        printf("one");
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    case '5':
        printf("five");
        break;
    case '6':
        printf("six");
        break;
    case '7':
        printf("seven");
        break;
    case '8':
        printf("eight");
        break;
    case '9':
        printf("nine");
        break;
    
    default:
        break;
    }
}else if (year_3 == '8' )
{
    printf("eighty ");
    switch (year_4)
    {
    case '0':
        break;
    case '1':
        printf("one");
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    case '5':
        printf("five");
        break;
    case '6':
        printf("six");
        break;
    case '7':
        printf("seven");
        break;
    case '8':
        printf("eight");
        break;
    case '9':
        printf("nine");
        break;
    
    default:
        break;
    }
}else if (year_3 == '9' )
{
    printf("ninety ");
    switch (year_4)
    {
    case '0':
        break;
    case '1':
        printf("one");
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    case '5':
        printf("five");
        break;
    case '6':
        printf("six");
        break;
    case '7':
        printf("seven");
        break;
    case '8':
        printf("eight");
        break;
    case '9':
        printf("nine");
        break;
    
    default:
        break;
    }
}else if (year_3 == '0' )
{
    switch (year_4)
    {
    case '0':
        break;
    case '1':
        printf("one");
        break;
    case '2':
        printf("two");
        break;
    case '3':
        printf("three");
        break;
    case '4':
        printf("four");
        break;
    case '5':
        printf("five");
        break;
    case '6':
        printf("six");
        break;
    case '7':
        printf("seven");
        break;
    case '8':
        printf("eight");
        break;
    case '9':
        printf("nine");
        break;
    
    default:
        break;
    }
}


printf(" A.D.");






}


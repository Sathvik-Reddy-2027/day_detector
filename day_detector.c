// code for finding day of the week
#include <stdio.h>
int main()
{
    int dt, mn, yr, o1, o2, o3, o4, o5, o6, tot, e;
    printf("Enter date\n");
    scanf("%d", &dt);
    printf("Enter number of the month\n");
    scanf("%d", &mn);
    printf("Enter year\n");
    scanf("%d", &yr);
    e = yr - yr % 100;
    if (e % 400 == 100)
    {
        o1 = 5;
    }
    else if (e % 400 == 200)
    {
        o1 = 3;
    }
    else if (e % 400 == 300)
    {
        o1 = 1;
    }
    else
    {
        o1 = 0;
    }
    o2 = yr - yr / 100100 - 1; // year
    o3 = o2 / 4;               // no of leap years
    o4 = o2 - o3;              // no of non leap years
    o5 = o4 + o3 * 2;          // no of odd days in years
    if ((o2 + 1) % 4 == 0)
    { // for leap years
        switch (mn)
        {
        case 1:
            mn = 0;
            break;
        case 2:
            mn = 3;
            break;
        case 3:
            mn = 4;
            break;
        case 4:
            mn = 7;
            break;
        case 5:
            mn = 9;
            break;
        case 6:
            mn = 12;
            break;
        case 7:
            mn = 14;
            break;
        case 8:
            mn = 17;
            break;
        case 9:
            mn = 20;
            break;
        case 10:
            mn = 22;
            break;
        case 11:
            mn = 25;
            break;
        case 12:
            mn = 27;
            break;
        default:
            printf("U entered invalid month\n");
        }
    }
    else
    {
        switch (mn)
        {
        case 1:
            mn = 0;
            break;
        case 2:
            mn = 3;
            break;
        case 3:
            mn = 3;
            break;
        case 4:
            mn = 6;
            break;
        case 5:
            mn = 8;
            break;
        case 6:
            mn = 11;
            break;
        case 7:
            mn = 13;
            break;
        case 8:
            mn = 16;
            break;
        case 9:
            mn = 19;
            break;
        case 10:
            mn = 21;
            break;
        case 11:
            mn = 24;
            break;
        case 12:
            mn = 26;
            break;
        default:
            printf("U entered invalid month\n");
        }
    }
    if (dt % 7 == 0 || dt % 7 == 7)
    {
        o6 = 0;
    }
    else if (dt % 7 == 1)
    {
        o6 = 1;
    }
    else if (dt % 7 == 2)
    {
        o6 = 2;
    }
    else if (dt % 7 == 3)
    {
        o6 = 3;
    }
    else if (dt % 7 == 4)
    {
        o6 = 4;
    }
    else if (dt % 7 == 5)
    {
        o6 = 5;
    }
    else
    {
        o6 = 6;
    }
    tot = o5 + mn + o6 + o1; // total odd days
    if (tot % 7 == 0 || tot % 7 == 7)
    {
        printf("Sunday\n");
    }
    else if (tot % 7 == 1)
    {
        printf("Monday\n");
    }
    else if (tot % 7 == 2)
    {
        printf("Tuesday\n");
    }
    else if (tot % 7 == 3)
    {
        printf("Wednesday\n");
    }
    else if (tot % 7 == 4)
    {
        printf("Thursday\n");
    }
    else if (tot % 7 == 5)
    {
        printf("Friday\n");
    }
    else
    {
        printf("Saturday\n");
    }
}
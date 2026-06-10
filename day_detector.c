#include <stdio.h>

int main()
{
    int dt, mn, yr;
    int o1, o2, o3, o4, o5, o6, tot, e;
    int leap = 0;

    printf("Enter date: ");
    scanf("%d", &dt);

    printf("Enter month number: ");
    scanf("%d", &mn);

    printf("Enter year: ");
    scanf("%d", &yr);

    /* Century code */
    e = yr - yr % 100;

    if (e % 400 == 100)
        o1 = 5;
    else if (e % 400 == 200)
        o1 = 3;
    else if (e % 400 == 300)
        o1 = 1;
    else
        o1 = 0;

    /* Leap year check */
    if ((yr % 400 == 0) || (yr % 4 == 0 && yr % 100 != 0))
        leap = 1;

    /* Years completed in current century */
    o2 = yr % 100 - 1;

    if (o2 < 0)
        o2 = 0;

    o3 = o2 / 4;      // leap years
    o4 = o2 - o3;     // non-leap years
    o5 = o4 + o3 * 2; // odd days contributed by years

    /* Month odd days */
    if (leap)
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
            printf("Invalid month\n");
            return 0;
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
            printf("Invalid month\n");
            return 0;
        }
    }

    o6 = dt % 7;

    tot = o1 + o5 + mn + o6;

    switch (tot % 7)
    {
    case 0:
        printf("Sunday\n");
        break;
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    }

    return 0;
}
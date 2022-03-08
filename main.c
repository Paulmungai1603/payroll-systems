/*
payroll system
created by marshmellow
on Mar 8,2022
MIT license
C99
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100],kra[20];
    int hours, overtimepay,gross,tax,net;
    printf("Marsh\ 's Factory Payroll\n");
    //capture input
    printf("Enter name:");
    gets(name);
    printf("Enter KRA PIN:");
    gets(kra);
    printf("Hours worked: ");
    scanf("%d",&hours);
    // Computation
    if(hours > 40) {
            overtimepay = (hours - 40) * 1.5 * 1000;
            gross = overtimepay + (40 * 1000);
    }
    else {
            overtimepay = 0;
            gross = hours * 1000;

    }

    tax = 0.3 * gross;
    net = gross - tax;
    // output
    printf("Employee Name: %s\n",name);
    printf("Gross Income: %d\n",gross);
    printf("Tax Paid: %d\n",tax);
    printf("Net Income: %d\n",net);
    return 0;
}

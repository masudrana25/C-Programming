#include <stdio.h>

int main()

{
    double C,F;

    printf("enter the Temperature in Degree Celsius : ");
    scanf("%lf",&C);

    F= (C*1.8) + 32 ;

    printf("Temperature in Degree Fahrenheit = %0.2lf",F);

    return 0;
}

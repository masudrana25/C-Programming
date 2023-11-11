#include <stdio.h>

double sub(double a, double b);

int main()
{
    double a,b;

    printf("Enter the 1st number : ");
    scanf("%lf",&a);
    printf("Enter the 2nd number : ");
    scanf("%lf",&b);

    double subs=sub(a,b);
    printf("The Substruction is %0.2lf1\n",subs);

    return 0;
}

double sub(double num1, double num2){
    double minus_sub = num1-num2;
    return minus_sub;
}

#include <stdio.h>

double avgs(double a, double b);

int main()
{
    double a,b;

    printf("Enter the 1st number : ");
    scanf("%lf",&a);
    printf("Enter the 2nd number : ");
    scanf("%lf",&b);

    double avg=avgs(a,b);
    printf("The average is %0.2lf\n",avg);

    return 0;
}


double avgs(double num1, double num2){
    double avg=(num1+num2)/2;
    return;
}

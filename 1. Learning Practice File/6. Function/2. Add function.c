#include <stdio.h>

double add( double a, double b);

int main()
{
    double num1,num2,sum;

    printf("Enter the number 1 : ");
    scanf("%lf",&num1);
    printf("Enter the number 2 : ");
    scanf("%lf",&num2);

    //printf("%0.2lf %0.2lf\n",num1,num2);

    sum = add(num1,num2);

    printf("The Sum is %0.2lf\n",sum);

    return 0;
}

double add(double num1,double num2){
    //printf("%0.2lf %0.2lf\n",num1,num2);
    double sum= num1 + num2;
    return sum;
}

#include <stdio.h>

int main()
{
    int first_number, deviation, last_number,sum=0,i;

    printf("Enter the First Number : ");
    scanf("%d",&first_number);

    printf("Enter the deviation : ");
    scanf("%d",&deviation);

    printf("Enter the Last Number : ");
    scanf("%d",&last_number);


    for(i=first_number;i<=last_number;){
        sum = sum + i;
        i=i+deviation;
    }
    printf("The Summation is = %d",sum);

    return 0;
}

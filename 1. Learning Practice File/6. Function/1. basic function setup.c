#include <stdio.h>

int add(int num1,int num2){
    int sum=num1+num2;
    return sum;
}

int main()
{
    int a=22; int b=2;
    int c=add(a,b);
    printf("%d\n",c);

    return 0;
}

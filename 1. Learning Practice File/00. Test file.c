#include <stdio.h>


int main()
{
    int a,b,sum,sub,mul,div;
    char sign;

    printf("Enter the value of a : ");
    scanf("%d",&a);

    printf("Enter the value of b : ");
    scanf("%d",&b);

    sum = a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;

    sign = '+';
    printf("%d %c %d = %d\n",a,sign,b,sum);

    sign = '-';
    printf("%d %c %d = %d\n",a,sign,b,sub);

    sign='x';
    printf("%d %c %d = %d\n",a,sign,b,mul);

    sign='/';
    printf("%d %c %d = %d\n",a,sign,b,div);

    return 0;
}

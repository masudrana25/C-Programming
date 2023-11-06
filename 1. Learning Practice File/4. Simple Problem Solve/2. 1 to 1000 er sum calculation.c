#include <stdio.h>

int main()

{
    int n,sum=0,i;

    printf("Enter the last number from which you want to make sum : ");
    scanf("%d",&n);

    for(i=0;i<=n;i++){
        sum = sum + i;
    }
    printf("The sum is %d\n",sum);
}

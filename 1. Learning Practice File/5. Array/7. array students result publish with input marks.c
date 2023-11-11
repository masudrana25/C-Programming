#include <stdio.h>

int main()
{
    int ary[5];
    int i,marks;

    for(i=0;i<5;i++){
        printf("Enter the %d  roll's result : ",i+1);
        scanf("%d",&marks);
        ary[i]=marks;
    }

    for(i=0;i<5;i++){
        printf("%d th element is %d\n",i,ary[i]);
    }


}

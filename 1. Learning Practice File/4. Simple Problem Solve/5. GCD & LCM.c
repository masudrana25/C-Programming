#include <stdio.h>

int main()

{
    int a,b,i,x,GCD,LCM;

    printf("Enter The Two Numbers : ");
    scanf("%d %d",&a,&b);

    if(a>b){
        x=b;
    }
    else{
        x=a;
    }

    for(i=x;i>=1;i--){
            if( a%i==0 && b%i==0){
                GCD = i;
                printf("GCD is = %d\n",GCD);
                break;
            }
        }
    LCM = (a*b)/GCD;
    printf("LCM is = %d\n",LCM);

    return 0;
}

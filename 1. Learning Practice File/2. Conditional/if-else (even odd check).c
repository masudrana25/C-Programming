#include <stdio.h>


int main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    if(n%2==0){
        printf("%d is a Even Number.\n",n);
    }
    else{
        printf("%d is a Even Number.\n",n);
    }
}

/*
int main()
{
    int int_vagfol,final_vagses;
    double n,vagfol,vagses;

    printf("Enter a number : ");
    scanf("%lf",&n);

    vagfol = n/2;
    int_vagfol = (int)vagfol;
    vagses = (n-int_vagfol*2);
    final_vagses = (int)vagses;

    printf("Final Vagses : %d\n",final_vagses);

    if(final_vagses ==0){
        printf("%lf is Even \n",n);
    }
    else{
        printf("Odd %lf\n",n);
    }

}
*/

#include <stdio.h>

double find_average( int a[], int b);

///array length value "n" should be change with changing the array element size.

int main()
{
    int ary[6] = {1,2,3,-1,-2,-5555};
    int n=6;
    int i;

    double avg = find_average(ary,n);
    printf("The Average is %0.2lf\n",avg);

    return 0;
}

double find_average(int ary[],int n)
{
    int i;
    double avg,sum=0;

    for(i=0;i<n;i++){
        sum=sum+ary[i];
    }

    avg=sum/n;

    return avg;
}

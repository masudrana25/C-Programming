#include <stdio.h>

int find_max(int a[], int b);

///array length value "n" should be change with changing the array element size.

int main()
{
    int ary[]={1,2,-120,34,6,7,90,111,8,4,2};

    int n=11;
    int max=find_max(ary,n);
    printf("The max is : %d\n",max);

    return 0;
}



int find_max(int ary[], int n){
    int max=ary[0];
    int i;

    for(i=1;i<n;i++){
        if(ary[i]>max){
            max=ary[i];
        }
    }

    return max;
}

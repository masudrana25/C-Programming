#include <stdio.h>

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

int main()
{
    int ary[]={1,2,8,4,2};

    int n=5;
    int max=find_max(ary,n);
    printf("The max is : %d\n",max);

    return 0;
}

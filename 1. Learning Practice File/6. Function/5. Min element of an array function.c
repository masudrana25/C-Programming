#include <stdio.h>

int find_min(int a[],int b);


///array length value "n" should be change with changing the array element size.

int main()
{
    int ary[7]={3,43,66,0,10,-12,-76};
    int n=7;

    int min = find_min(ary,n);

    printf("The Min is : %d\n",min);

    return 0;
}

int find_min(int ary[],int n)
{
    int i;
    int min=ary[0];
    for(i=1;i<n;i++){
        if(min>ary[i]){
            min=ary[i];
        }
    }
    return min;
}

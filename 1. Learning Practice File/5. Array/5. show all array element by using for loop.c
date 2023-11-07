#include <stdio.h>

int main()
{
    int i, arr[10]={1,2,3,4,5,6,7,8,9,10};


    for(i=0;i<10;i++){
        printf("%dth element is %d\n",i+1,arr[i]);
    }

    /*
    for(i=9; i>=0; i--){
        printf("%dth element is %d\n",i+1,arr[i]);
    }
     */

    return 0;
}

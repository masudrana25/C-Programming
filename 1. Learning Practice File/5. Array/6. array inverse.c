#include <stdio.h>

int main()
{
    int ary1[]={1,2,3,4,5,6,7,8,9,10};
    int ary2[10];
    int i,j;

    for(i=0,j=9;i<10,j>=0;i++,j--){
        ary2[j]= ary1[i];
    }

    //now ary2 is inverse of ary1

    for(i=0;i<10;i++){
        printf("%dth element is %d\n",i+1,ary2[i]);
    }

    return 0;
}

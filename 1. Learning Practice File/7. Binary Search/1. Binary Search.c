#include <stdio.h>

int main()
{
    int ary[10]={1,2,3,4,5,6,7,8,9,10};
    int low_indx = 0, high_indx = 9, mid_indx;
    int num = 10;

    printf("%d\n",(0+9)/2);

    while(low_indx <= high_indx){
        mid_indx = (low_indx+high_indx)/2;
        printf("mid_index = %d\n",mid_indx);

        if(ary[mid_indx] == num){
            break;
        }

        if(num < ary[mid_indx]){
            high_indx = mid_indx -1;
        }
        else{
            low_indx = mid_indx + 1;
        }
    }

    if(low_indx > high_indx){
        printf("%d is not in this arry.\n",num);
    }
    else{
        printf("%d is the %dth element of the array\n",ary[mid_indx],mid_indx);
    }

    return 0;
}

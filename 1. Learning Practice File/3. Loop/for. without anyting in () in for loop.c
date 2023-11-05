#include <stdio.h>

int main()
{
    int i=5,j=1;

    for(;;){
        if(j>10){
            break;
        }
        printf("%d x %d = %d\n",i,j,i*j);
        j++;
    }

    return 0;
}

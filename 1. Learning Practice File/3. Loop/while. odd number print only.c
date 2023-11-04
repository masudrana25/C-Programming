
#include <stdio.h>

int main()
{
    int i=0;

    while( i<15){
            i=i+1;
            if(i%2==0){
                continue;
            }
            printf("%d\n",i);

    }
}


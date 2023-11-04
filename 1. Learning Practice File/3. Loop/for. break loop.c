#include <stdio.h>

int main()
{
    int i;

    for(i=1; ; ){
        printf("%d\n",i);
        i++;
        if(i==10){
            break;
        }
    }
}

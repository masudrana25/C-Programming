#include <stdio.h>

int main()
{
    ///char country[]={'B','A','N','G','L','A','D','E','S','H','\0'};
    char country[]="BANGLADESH";
    int length = 10;

    for(int i=0;i<length;i++){
        if(country[i]>=65 && country[i]<=90){
            country[i]= country[i] + 32;
        }
    }


    printf("%s\n",country);


    return 0;
}


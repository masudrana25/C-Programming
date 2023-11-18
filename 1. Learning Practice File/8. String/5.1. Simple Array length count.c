#include <stdio.h>

int main()
{
    ///char country[]={'B','A','N','G','L','A','D','E','S','H','\0'};
    ///char country[]="BANGLADESH";
    char country[]="BANGLADESH is my country.";
    int array_length = 0;

    for(int i=0;country[i]!=0;i++){
        array_length++;
    }

    printf("total array length is = %d\n",array_length);


    return 0;
}

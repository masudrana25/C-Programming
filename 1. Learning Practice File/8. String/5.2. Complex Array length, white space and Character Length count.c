#include <stdio.h>

int main()
{
    ///char country[]={'B','A','N','G','L','A','D','E','S','H','\0'};
    ///char country[]="BANGLADESH";
    char country[]="BANGLADESH is my country.";
    int array_length = 0,white_space =0, character_length = 0;;

    for(int i=0;country[i]!=0;i++){
        array_length++;
        if(country[i]==' '){
           white_space++;
        }
        if(country[i]!=' '){
           character_length++;
        }
    }

    printf(" total array length is = %d\n total white space is = %d\n total character length is = %d\n",array_length,white_space,character_length);


    return 0;
}

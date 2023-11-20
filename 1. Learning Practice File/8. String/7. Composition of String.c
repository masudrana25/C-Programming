#include <stdio.h>

int find_length(char a[])
{
    int length = 0;
    for(int i=0;a[i]!=0;i++){
        length++;
    }

    return length;
}

int main()
{
    char * string1 = "Bangla";
    char * string2 = "desh";

    int length1 = find_length(string1);
    int length2 = find_length(string2);

    int length_of_combined_string = length1+length2;
    char combined_string[length_of_combined_string];

    int length3 = 0,i,j;

    for(i=0;i<length1;i++){
        combined_string[i]=string1[i];
        length3++;
    }

    for(j=length3,i=0; j<length_of_combined_string; j++,i++){
         combined_string[j]=string2[i];
    }
    combined_string[j]='\0';

    printf("%s",combined_string);

    return 0;
}

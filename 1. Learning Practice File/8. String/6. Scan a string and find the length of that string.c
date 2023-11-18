#include <stdio.h>

int find_char_length(char str[])
{
    int length=0;
    for(int i=0;str[i]!=0;i++){
        length++;
    }

    return length;
}

int main()
{
    char input_string[100];
    int length_Of_Character;

    while(printf("Enter a String: ") && 1== scanf("%s",input_string)){

        length_Of_Character = find_char_length(input_string);

        printf("Input String is : %s\n",input_string);
        printf("Length of Character is : %d\n\n", length_Of_Character);


    }

    return 0;
}

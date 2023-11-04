#include <stdio.h>

int main()
{
    char character;

    printf("Enter a character : ");
    scanf("%c",&character);

    if(character >= 'a' && character <='z'){
        printf("%c is Lower Case",character);
    }
    if(character >= 'A' && character <='Z'){
        printf("%c is Upper Case",character);
    }
}

#include <stdio.h>

int main()
{
    char country[11] = {'B','a','n','g','l','a','d','e','s','h','\0'};
    char country2[]={'B','a','n','g','l','a','d','e','s','h','\0'};
    char country3[]="Bangladesh";

    /// '\0' =end of array. er porey kichu thakley, compiler seita k dekhbey na.

    char country4[]={'B','a','n','g','l','a','d','e','s','h',' ','i','s',' ','m','y',' ','c','o','u','n','t','r','y','\0'};
    char country5[]={'B','a','n','g','l','a','d','e','s','h',' ','i','s','\0','m','y',' ','c','o','u','n','t','r','y','\0'};

    char country6[]="Bangladesh is my country";
    char country7[]="Bangladesh is \0 my country";


    printf("%s\n",country);
    printf("%s\n",country2);
    printf("%s\n",country3);
    printf("%s\n",country4);
    printf("%s\n",country5);
    printf("%s\n",country6);
    printf("%s\n",country7);

    return 0;
}

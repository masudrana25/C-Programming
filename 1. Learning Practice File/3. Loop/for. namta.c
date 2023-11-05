#include <stdio.h>

/*
int main()
{
    int i=5,j, mul;

    for(j=1;j<=10;j++){
        mul = i*j;
        printf("%d x %d = %d\n",i,j,mul);
    }

    return 0;
}
*/


int main()
{
    int i,j,mul;

    for(i=1;i<=10;i++){
        for(j=1;j<=10;j++){
            mul = i*j;
            printf("%d x %d = %d\n",i,j,mul);
        }

    }

    return 0;
}



//namta by sum

/*
int main()
{
    int i,j,m;

    for(i=1;i<=10;i++){
        m=0;
       for(j=1;j<=10;j++){
            m = m+i;
            printf("%d x %d = %d\n",i,j,m);
       }
    }

    return 0;
}

*/


#include <stdio.h>

int main()
{
    int first_exam=80,second_exam=74,third_exam=97;
    double r;

    //r= first_exam*0.25 + second_exam*0.25 + third_exam*.50;
    //r= first_exam/4 + second_exam/4 + third_exam/2;
    r= first_exam/4.0 + second_exam/4.0 + third_exam/2.0;

    printf("%0.0lf\n",r);

    return 0;
}

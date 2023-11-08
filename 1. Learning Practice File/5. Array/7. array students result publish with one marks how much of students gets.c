#include <stdio.h>

int main()
{
    int total_marks[]={87,64,91,43,89,66,58,73,99,81,100,64,55,69,85,81,80,67,88,71,62,78,58,66,98,75,86,90,80,85,100,64,55,69,85,81,80,67,88,71};
    int marks,i,count;


    for(marks=1;marks<101;marks++){

        count=0;
        for(i=0;i<40;i++){
            if(total_marks[i]==marks){
                count++;
            }
        }
        if(count != 0){
            printf("marks %d : count %d\n", marks,count);
        }
    }

}

#include <stdio.h>

int main()
{
    int first_exam[40]={83,86,97,95,93,95,86,52,49,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,83,47,95,69,82,82,58,69,67,53,56,71,62,78,98};
    int secound_exam[40]={86,97,95,93,95,86,52,49,41,42,47,90,59,63,86,40,46,92,56,51,48,67,49,42,90,42,83,47,95,69,82,82,58,69,67,53,56,71,62,49};
    int final_exam[40]={87,64,91,43,89,66,58,73,99,81,100,64,55,69,85,81,80,67,88,71,62,78,58,66,98,75,86,90,80,85,100,64,55,69,85,81,80,67,88,71};

    int i,j,count,marks;
    double total_result[40];

    for(i=0;i<40;i++){
        total_result[i] = 0.25*first_exam[i]+0.25*secound_exam[i]+0.5*final_exam[i];
    }

    //for(i=0;i<40;i++){
      //  printf("Roll No %d\t Total Marks is %0.0lf\n",i+1,total_result[i]);
    //}



    for(marks=1;marks<101;marks++){

        count=0;
        for(i=0;i<40;i++){
            if((int)total_result[i]==marks){
                count++;
            }
        }
        if(count != 0){
            printf("marks %d : count %d\n", marks,count);
        }
    }



    return 0;
}

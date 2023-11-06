#include <stdio.h>

int main()
{
    double amount_of_loan, percent_of_interest,loan_solving_year,interest,total_amount_to_pay,total_month,pay_per_month;

    printf("Enter the amount of load : ");
    scanf("%lf",&amount_of_loan);

    printf("Enter the interest rate : ");
    scanf("%lf",&percent_of_interest);

    printf("Enter the loan Solving Years : ");
    scanf("%lf",&loan_solving_year);

    interest = (amount_of_loan * percent_of_interest)/100;

    total_amount_to_pay = amount_of_loan + interest;

    total_month = loan_solving_year * 12;

    pay_per_month = total_amount_to_pay / total_month;

    printf("Total Amount of Loan is %0.2lf\n",total_amount_to_pay);
    printf("Amount of Loan Solving Per Month is %0.2lf\n",pay_per_month);

    return 0;
}

#include<stdio.h>
int main()
{
	int age,existing_loan_status;
	float income, credit_score;
	printf("Enter your age and existing loan status(1 = Yes, 0 = No):");
	scanf("%d %d", &age, &existing_loan_status);
	printf(" Enter income and credit score:");
	scanf("%f %f", &income, &credit_score);
	
	if(age>=21){
		if(income>=100000 && credit_score>=750 && existing_loan_status==0){
		printf("High Approval Chance");
		}
		
     	else if(income>=75000 && credit_score>=650 && existing_loan_status==1){
		printf("Manual Review");
	}
    	else if(income>=50000 && credit_score>=600){
		printf("Possibly Eligible");
    }
         else 
    printf("Rejected");
    }
    else
    printf("Rejected");
    return 0;
	
	}

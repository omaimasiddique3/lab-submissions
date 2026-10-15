#include<stdio.h>
int main(){
	float marks_of_maths, marks_of_AI, marks_of_programming, attendance, average;
	printf("Enter marks of maths, ai, programming and attendance:");
	scanf("%f %f %f %f", &marks_of_maths, &marks_of_AI, &marks_of_programming, &attendance);
	if (marks_of_maths >= 50 && attendance >= 75){
		if(marks_of_AI >= 50 && marks_of_programming >= 50){
		
		printf("Student is Eligible\n.");
		average=(marks_of_maths + marks_of_AI + marks_of_programming)/3;
      	if(average >=80)
    	 printf("Excellent");
	     else if(average >=70)
    	 printf("Very Good");
	     else if(average >=60)
	     printf("Good");
	     else if(average >=50)
	     printf("Satisfactory");
	     else
	     printf("Poor");}
	    else 
	    printf("Student is not Eligible.");}
else 
printf("Student is not Eligible.");
	return 0;
}

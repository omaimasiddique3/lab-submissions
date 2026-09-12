#include<stdio.h>
int main()
{
	int obstacle, person, battery;
	printf("Enter obstacle status(1=detected 0=clear):");
	scanf("%d", &obstacle);
	printf("Enter person status(1=detected 0=clear):");
	scanf("%d", &person);
	printf("Enter battery percentage(0 to 100):");
	scanf("%d", &battery);
	
	if(obstacle==1){
		if(person==1){
			printf("Emergency Stop.\n");
		}
		else{
			printf("Change Direction.\n");
		}
	}
	else{
		if(battery<20.0){
			printf("Return to Charging Station.\n");}
		else{
			printf("Continue Moving.\n");
		}
	}
	return 0;
	
	
	
}

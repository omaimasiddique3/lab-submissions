#include<stdio.h>
int main(){
	
	int total_records, missing_records, duplicate_records;
	printf("Enter total number of records:");
	scanf("%d", &total_records);
    printf("Enter number of missing records:");
    scanf("%d", &missing_records);
	printf("Enter number of duplicate records:");
	scanf("%d", &duplicate_records);
	if (total_records<=0){	
	printf("Invalid Dataset\n");}
	
	
	else{
			float missing_percentage=((float)missing_records / total_records)*100;
         	float duplicate_percentage=((float)duplicate_records/ total_records)*100;
	
     	if (missing_percentage>30.0){
		printf("Poor Quality Dataset\n");
     	}
     	else if(missing_percentage<=30.0 && duplicate_percentage>20.0){
		printf("Dataset Requires Cleaning\n");
     	}
     	else {
		printf("Dataset Ready for Training");
     	}
}
	return 0;
}

	

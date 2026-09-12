#include<stdio.h>
int main()
{
	float accuracy;
	int latency, approval_status;
	
	printf("Enter accuracy:");
	scanf("%f", &accuracy);
	printf("Enter Prediction latency(ms):");
	scanf("%d", &latency);
	printf("Enter Model approval status:");
	scanf("%d", &approval_status);
	
	int can_deploy = 1;
	if(accuracy<90.0){
		printf("Accuracy too low.\n");
		can_deploy = 0;
	}
	if(latency>100){
		printf("Latency too high.\n");
		can_deploy = 0;
	}
	if(approval_status!=1){
		printf("Model not approved.\n");
		can_deploy = 0;
	}
	if(can_deploy){
		printf("Model Approved for Deployment");
	}
	return 0;
	
	
}

#include<stdio.h>
int main()
{
	int role, status, security_level;
	printf("Enter user role(1=Admin 2=Researcher 3=Student):");
	scanf("%d", &role);
	printf("Enter status(1=Active 0=Inactive):");
	scanf("%d", &status);
	printf("Enter security level:");
	scanf("%d", &security_level);
	if(status==0){
		printf("Access Denied");
		return 0;}
    switch(role){
    	case 1:
    		if(security_level>=3){
    			printf("Access Granted: Admin\n");}
    		else
    		{printf("Access Denied.\n");}
    		break;
        case 2:
		    if(security_level>=2){
	       	printf("Access Granted: Researcher\n ");}
	    	else
		    {printf("Access Denied.\n");}
		    break;
	    case 3:
			if(security_level>=1){
			printf("Access Granted: Student\n");}
			else
			{printf("Access Denied.\n");}
			break;
			default:
			printf("Access Denied.\n");
			
		}
		}

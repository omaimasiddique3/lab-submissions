#include<stdio.h>
#include<string.h>
int main()
{
	char fullname[50];
	
	printf("Enter your full name:");
	fgets(fullname, sizeof(fullname), stdin);
	fullname[strcspn(fullname,"\n")]='\0';
	printf("Hello,\n%s\n", fullname);
	return 0;
	
	}

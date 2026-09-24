#include<stdio.h>
int main()
{
	int category, choice;
	printf("Select a category(\n1. Greetings,\n2. Study, \n3. Weather, \n4. Help\nChoice:):");
	scanf("%d", &category);
	
	switch(category){
		case 1:
			printf("\n Greeting choices: \n1.Hello, \n2.How are you?, \n3. Goodbye\n Choice:");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("Hello. How can i assist you today?\n");
				break;
				case 2: printf("I'm just a code, but i am doing great.\n");
				break;
				case 3: printf("Goodbye! Have a great day.\n");
				break;
				default:
					printf("Invalid Choice.\n");
			}
		break;
		case 2:
				printf("\n Study choices: \n1. Programming, \n2. Mathematics, \n3. AI\n Choice:");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("C Programming lies on syntax, pointers and structures\n.");
				break;
				case 2: printf("Mathematics is foundational for algorithm and data analysis.\n");
				break;
				case 3: printf("AI feilds cover machine learning, deep learning and NLP.\n");
				break;
				default:
					printf("Invalid Choice.\n");
			}
		break;
		case 3:
				printf("\n Weather info: \n1. Today, \n2. Tomorrow, \n3. Forecast\n Choice:");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("Today's weather is sunny.\n");
				break;
				case 2: printf("Tomorrow's weather is expected to be cloudy.\n");
				break;
				case 3: printf("The forecast shows pleasnant temperature.\n");
				break;
				default:
					printf("Invalid Info.\n");
			}
			break;
			case 4:
			printf("\n Help: \n1. About Chatbot, \n2. Commands, \n3. Exit\n Choice:");
			scanf("%d",&choice);
			switch(choice){
				case 1: printf("I am a rule based system.\n");
				break;
				case 2: printf("Use numeric choices to navigate.\n");
				break;
				case 3: printf("Exit.\n");
				break;
				default:
					printf("Invalid.\n");
			}
			break;
			default:
				printf("Invalid Category.\n");
	
	}
	return 0;
	
	
	
	
	
	}

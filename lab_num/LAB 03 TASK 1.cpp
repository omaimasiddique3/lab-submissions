#include<stdio.h>
#include<string.h>
int main()
{char name[50], city[50];
    int age;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your city: ");
    scanf(" %[^\n]", city);

    printf("\nName: %s\n", name);
    printf("Age: %d\n", age);
    printf("City: %s\n", city);

    return 0;
}



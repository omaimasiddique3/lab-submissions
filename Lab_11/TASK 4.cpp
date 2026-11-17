#include <stdio.h>

struct Address {
    char city[50];
    int zipCode;
    char state[50];
};

struct Student {
    int rollNo;
    char name[50];
    float cgpa;
    struct Address studentAddress; 
};

int main() {
    struct Student student1 = {101, "Ali Khan", 3.82, {"Karachi", 75500, "Sindh"}};

    printf("--- Complete Student Profile ---\n");
    printf("Roll No: %d\n", student1.rollNo);
    printf("Name: %s\n", student1.name);
    printf("CGPA: %.2f\n", student1.cgpa);
    printf("City: %s\n", student1.studentAddress.city);
    printf("State: %s\n", student1.studentAddress.state);
    printf("Zip Code: %d\n", student1.studentAddress.zipCode);

    return 0;
}

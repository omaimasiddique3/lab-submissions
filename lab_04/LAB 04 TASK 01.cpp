#include <stdio.h>

int main() {
    double num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
        printf("Number1 is the greatest: %.2lf\n", num1);
    } 
    else if (num2 > num1 && num2 > num3) {
        printf("Number2 is the greatest: %.2lf\n", num2);
    } 
    else if (num3 > num1 && num3 > num2) {
        printf("Number3 is the greatest: %.2lf\n", num3);
    } 
    else if (num1 == num2 && num2 == num3) {
        printf("All numbers are equal: %.2lf\n", num1);
    } 
    else {
        printf("Two numbers are equal and share the greatest value.\n");
    }

    return 0;
}

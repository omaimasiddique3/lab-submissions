#include <stdio.h>

int add(int a, int b)     
{ 
return a + b;
 }
int multiply(int a, int b) {
 return a * b;
  }
int findMax(int a, int b)  
{ return (a > b) ? a : b; 
   }

int compute(int a, int b, int (*operation)(int, int)) {
    return operation(a, b);
}

int main(void) {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int sum     = compute(x, y, add);
    int product = compute(x, y, multiply);
    int max     = compute(x, y, findMax);

    printf("Sum     = %d\n", sum);
    printf("Product = %d\n", product);
    printf("Maximum = %d\n", max);
    return 0;
}

#include <stdio.h>
int sum(int a, int b) {
    int sumofNumbers = a + b;
    printf("Sum inside function: %d\n", sumofNumbers);
    return sumofNumbers;
}

int main() {
    int a, b, sumofNumbers;
    printf("Enter the number a: ");
    scanf("%d", &a);
    printf("Enter the number b: ");
    scanf("%d", &b);
    
    sumofNumbers = sum(a, b);
    
    return 0;
}

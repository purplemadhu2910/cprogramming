#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int myNumber, userNumber;
    srand(time(0));
    myNumber = rand() % 100 + 1;

    printf("Guess the number (1-100):\n");
    
    do {
        printf("Enter your guess: ");
        scanf("%d", &userNumber);

        if (userNumber == myNumber) {
            printf("WHOOOO....CORRECT NUMBER!!!\n");
            break;
        } else if (userNumber > myNumber) {
            printf("Your number is too large~~~~\n");
        } else {
            printf("Your number is too small~~~~\n");
        }
    } while (userNumber >= 0);

    printf("My number was: %d\n", myNumber);

    return 0;
}

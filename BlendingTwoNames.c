#include <stdio.h>
#include <string.h>

// Function to blend the first few letters of two names
void blendFirstLetters(char name1[], char name2[], char result[]) {
    strncpy(result, name1, 3);   // Copy the first 3 letters from name1
    result[3] = '\0';
    strncat(result, name2, 3);   // Concatenate the first 3 letters from name2
}

// Function to blend the last few letters of two names
void blendLastLetters(char name1[], char name2[], char result[]) {
    int len1 = strlen(name1);
    int len2 = strlen(name2);
    if (len1 >= 3 && len2 >= 3) {
        strncpy(result, name1 + len1 - 3, 3);   // Copy the last 3 letters from name1
        result[3] = '\0';
        strncat(result, name2 + len2 - 3, 3);   // Concatenate the last 3 letters from name2
    } else {
        strcpy(result, "Invalid input");
    }
}

int main() {
    char name1[50];
    char name2[50];
    char result[100];  // Resulting blended name
    int choice;
    char continueChoice;
    
    do {
        printf("Enter the first name: ");
        scanf("%s", name1);
    
        printf("Enter the second name: ");
        scanf("%s", name2);
    
        printf("Choose blending option:\n");
        printf("1. Blend first few letters\n");
        printf("2. Blend last few letters\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);
    
        if (choice == 1) {
            blendFirstLetters(name1, name2, result);
        } else if (choice == 2) {
            blendLastLetters(name1, name2, result);
        } else {
            strcpy(result, "Invalid choice");
        }
    
        printf("Blended name: %s\n", result);
        
        printf("Do you want to blend more names? (y/n): ");
        scanf(" %c", &continueChoice);
    } while (continueChoice == 'y' || continueChoice == 'Y');
    
    return 0;
}


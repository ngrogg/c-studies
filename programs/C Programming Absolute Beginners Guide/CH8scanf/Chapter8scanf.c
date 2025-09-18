// Example program 1 from Chapter 8 of absolute beginner's guide to C

#include <stdio.h>

int main(){
    // Variables
    char firstInitial, lastInitial;
    int age, favoriteNumber;

    printf("What letter does your first name begin with?\n");
    scanf(" %c", &firstInitial);

    printf("What letter does your last name begin with?\n");
    scanf(" %c", &lastInitial);

    printf("How old are you?\n");
    scanf(" %d", &age);

    printf("What is your favorite number (integer only)?\n");
    scanf(" %d", &favoriteNumber);

    printf("\nYour initials are %c.%c. and you are %d years old", firstInitial, lastInitial, age);
    printf("\n Your favorite number is %d.\n\n",favoriteNumber);
    
    return 0;
}

/* Chapter 17: Case and Switch statement
 * C Program demonstrating the Case and Switch statements
 * By Nicholas Grogg
 * */

// Import statements
#include <stdio.h>
#include <stdlib.h>

// Function Definition
void runProgram(){
    int choice;
    printf("What do you want to do?\n");
    printf("1. Add New Contact\n");
    printf("2. Edit Existing Contact\n");
    printf("3. Call Contact\n");
    printf("4. Text Contact\n");
    printf("5. Exit\n");

    do {
         printf("Enter your choice: ");
         scanf(" %d", &choice);
         switch(choice) {
              case (1): printf("\nTo Add you will need the contact's ");
                        printf("First name, last name and number\n");
                        break;
              case (2): printf("\nGet ready to enter the name of the contact you wish to change");
                        break;
              case (3): printf("\nWhich contact do you wish to call?");
                        break;
              case (4): printf("\nWhich contact do you wish to text?");
                        break;
              // Exit early
              case (5): exit(1);
              // Default failstate
              default: printf("\n%d is not a valid option!\n", choice);
                       printf("Try again.\n");
                       break;
        }
    } while ((choice < 1) || (choice > 5));
}

int main() {
    runProgram();
    return 0;
}


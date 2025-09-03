/* Fortune Cookie
 * C Program Fortune Cookie from "C Programming for the Absolute Beginner"
 * By Nicholas Grogg
 * */

// Import statements
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Definition
void runProgram(){
        // Declare variables
        int randomNum = 0;
        srand(time(NULL));
        randomNum = (rand() % 4) +1;

        // Switch statement for Fortune
        switch (randomNum) {
                case 1:
                        printf("\nSomething will happen!\n");
                        break;
                case 2:
                        printf("\nBad things may happen...\n");
                        break;
                case 3:
                        printf("\nSome things might happen.\n");
                        break;
                case 4:
                        printf("\nNothing ever happens!\n");
                        break;
        }

        // Lucky Lotto numbers
        printf("\nLucky lotto numbers: ");
        printf("%d ", (rand() % 49) + 1);
        printf("%d ", (rand() % 49) + 1);
        printf("%d ", (rand() % 49) + 1);
        printf("%d ", (rand() % 49) + 1);
        printf("%d ", (rand() % 49) + 1);
        printf("%d\n", (rand() % 49) + 1);
}

int main() {
        runProgram();
        return 0;
}


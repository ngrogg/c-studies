/* Concentration
 * C Program Concentration from "C Programming for the Absolute Beginner"
 * By Nicholas Grogg
 * */

// Import statements
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function Definition
void runProgram(){
        // Declare variables
        char inputVar = '\0';
        int response1 = 0;
        int response2 = 0;
        int response3 = 0;
        int elapsedTime = 0;
        int currentTime = 0;
        int number1 = 0;
        int number2 = 0;
        int number3 = 0;
        srand(time(NULL));

        // Prompt user to input and read in input
        printf ("\nPlay a game of Concentration? (y or n): ");
        scanf("%c", &inputVar);

        if (inputVar == 'y' || inputVar == 'Y') {
            // Set numbers to guess
            number1 = rand() % 100;
            number2 = rand() % 100;
            number3 = rand() % 100;

            // Output numbers
            printf("\nConcentrate on the next three numbers\n");
            printf("\n%d\t%d\t%d\n", number1, number2, number3);

            // Timer loop, clear screen when complete
            currentTime = time(NULL);
            do {
                elapsedTime = time(NULL);
            } while ( (elapsedTime - currentTime) < 3);
            system("clear");

            // Prompt user to input numbers
            printf("\nEnter each # separated with one space: ");
            scanf("%d%d%d", &response1, &response2, &response3);
            if ( response1 == number1 && response2 == number2 && response3 == number3 )
                printf("\nCongratulations!\n");
            else
                printf("\nSorry, correct numbers were %d %d %d\n", number1, number2, number3);
        }
}

int main() {
        runProgram();
        return 0;
}



/* Trivia
 * C Program "Trivia" from "C Programming for the Absolute Beginner"
 * By Nicholas Grogg
 * */

// Import statements
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Global Variable - do not do this...
int response = 0;

// Function Definitions
int sportsQuestion(void){
    int answer = 0;
    system("clear");
    printf("\tSports Question\n");
    printf("\nWhat university did NFL star Deion Sanders attend?\n");
    printf("1\tUniversity of Miami\n");
    printf("2\tCalifornia State University\n");
    printf("3\tIndiana University\n");
    printf("4\tFlorida State University\n");
    printf("\nEnter your selection: ");
    scanf("%d", &answer);
    return answer;
}

int geographyQuestion(void){
    int answer = 0;
    system("clear");
    printf("\tGeography Question\n");
    printf("\nWhat is the state capital of Florida\n");
    printf("1\tPensacola\n");
    printf("2\tTallahassee\n");
    printf("3\tJacksonville\n");
    printf("4\tMiami\n");
    printf("\nEnter your selection: ");
    scanf("%d", &answer);
    return answer;
}

// Pause is an already defined thing, why are we reinventing the wheel...
void pause(int inNum){
    int currentTime = 0;
    int elapsedTime = 0;
    currentTime = time(NULL);
    do {
        elapsedTime = time(NULL);
    } while( (elapsedTime - currentTime) < inNum);
}

// Function to run program
void runProgram(){
    do {
         system("clear");
         printf("\n\tTHE TRIVIA GAME\n\n");
         printf("1\tSports\n");
         printf("2\tGeography\n");
         printf("3\tQuit\n");
         printf("\n\nEnter your selection: \n");
         scanf("%d", &response);

         switch(response) {
              case 1:
                   if (sportsQuestion() == 4)
                        printf("\nCorrect!\n");
                   else
                        printf("\nIncorrect\n");
                   // I'm seriously not liking this book... vv
                   pause(2);
                   break;
              case 2:
                   if (geographyQuestion() == 2)
                        printf("\nCorrect!\n");
                   else
                        printf("\nIncorrect\n");
                   // Nope, still hate it
                   pause(2);
                   break;
         }
    } while (response != 3 );
}

int main() {
    runProgram();
    return 0;
}


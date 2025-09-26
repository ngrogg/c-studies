/* Chapter 18: Get and Put char
 * Demonstration of C getchar() and putchar()
 * By Nicholas Grogg
 * */

// Import statements
#include <stdio.h>
#include <stdlib.h>
// Needed for strlen()
#include <string.h>

// Function Definition
void runProgram(){
    // Putchar demo
    char msg1[] = "C is fun";

    for (int count=0;count<strlen(msg1);count++){
        putchar(msg1[count]);
    }
    putchar('\n');

    // Getchar demo
    char msg2[25];

    printf("Type up to 25 characters and then press Enter...\n");
    for (int count=0; count < 25; count++){
         msg2[count] = getchar();
         if (msg2[count] == '\n'){
              count--;
              break;
         }
    }

    putchar('\n');

    // I don't think this is correct
    //for (int count = 25;count > 0; count--){
    //    putchar(msg2[count]);
    //}
    for (int count=0;count<strlen(msg2);count++){
        putchar(msg2[count]);
    }

    putchar('\n');
}

int main(int argc, char *argv[]) {
    runProgram();
    return 0;
}


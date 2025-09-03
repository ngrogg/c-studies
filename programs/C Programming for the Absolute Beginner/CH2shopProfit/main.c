/* Shop Profit
 * Chapter Program: Shop Profit from C Programming for the Absolute Beginner
 * By Nicholas Grogg
 * */

// Import statements
#include <stdio.h>
#include <stdlib.h>

// Function Definition
void runProgram(){
        // Declare variables
        float revenue, cost;

        // Read in revenue
        printf("Enter total revenue: ");
        scanf("%f", &revenue);

        // Read in cost
        printf("\nEnter total cost: ");
        scanf("%f", &cost);

        // Profit =  Revenue - Cost
        printf("\nProfit is $%.2f\n", revenue-cost);

}

int main(){
        runProgram();
        return 0;
}


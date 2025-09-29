// Example Program 1 from Chapter 24 of Absolute Beginner's Guide to C
// File CH24Pointers.c

#include <stdio.h>
#include <string.h>

int main(){
    int kids; 
    int * pKids; 
    float price;
    float * pPrice;
    char code;
    char * pCode;

    price = 17.50;
    pPrice = &price;

    printf("\nHow many kids are you taking to the water park? ");
    scanf(" %d", &kids);

    pKids = &kids;

    printf("\nDo you have a discount ticket for the park?");
    printf("\nEnter E for Employee Discout, S for Sav-More ");
    printf("Discout or N for No Discout: ");
    scanf(" %c", &code);

    pCode = &code;

    printf("\nFirst let's do it with the variables: \n");
    printf("You've got %d kids...\n", kids);

    switch (code){
    case ('E') : 
        printf("The employee discount saves you 25%% on the ");
        printf("$%.2f price", price);
        printf("\nTotal ticket cose: $%.2f", (price*.75*kids));
        break;
    case ('S') : 
        printf("The Sav-more discount saves you 15%% on the ");
        printf("$%.2f price", price);
        printf("\nTotal ticket cost: $%.2f", (price*.85*kids));
        break;
    default : 
        printf("You will be paying full price of ");
        printf("$%.2f for your tickets", price);
    }

    printf("\n\n\nNow let's do it with the pointers:");
    printf("You've got %d kids...\n", *pKids);

    switch (*pCode){
    case ('E') : 
        printf("The employee discount saves you 25%% on the ");
        printf("$%.2f price", *pPrice);
        printf("\nTotal ticket cose: $%.2f", (*pPrice *.75* *pKids));
        break;
    case ('S') : 
        printf("The Sav-more discount saves you 15%% on the ");
        printf("$%.2f price", *pPrice);
        printf("\nTotal ticket cost: $%.2f", (*pPrice *.85* *pKids));
        break;
    default : 
        printf("You will be paying full price of ");
        printf("$%.2f for your tickets", *pPrice);
    }

    return 0;
}

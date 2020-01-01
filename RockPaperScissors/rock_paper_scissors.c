#include <stdio.h>

int main (void)
{

    int A, B;
    srand(time(NULL));
    char *choiceA;
    char *choiceB;

    printf("Please type a number to choose one of the following:\n 1) Rock\n 2) Paper\n 3) Scissors: \n\n Your input is:\n===========\n");
    scanf("%d", &A);
    printf("===========\n");

    B = 1 + rand()%3;

    switch(A){
        case 1:
            choiceA = "Rock";
            break;
        case 2:
            choiceA = "Paper";
            break;
        case 3:
            choiceA = "Scissors";
            break;
    }

    switch(B){
        case 1:
            choiceB = "Rock";
            break;
        case 2:
            choiceB = "Paper";
            break;
        case 3:
            choiceB = "Scissors";
            break;
    }
    printf("Your choice is: %s\n\n", choiceA);
    printf("The computer chose: %s\n\n", choiceB);

    printf("====== THE RESULT IS: =====\n");

    if (A == B)
        printf("DRAW !\n\n\n");

    else if (A == 1 && B == 2 || A == 2 && B == 3 || A == 3 && B == 1)
        printf("You've lost !\n\n\n");


    else if (A == 1 && B == 3 || A == 2 && B == 1 || A == 3 && B == 2)
        printf("You've won! Congrats!\n\n\n");


    return 0;


}

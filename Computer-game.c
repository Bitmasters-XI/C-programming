#include <stdio.h>
int main(){
    //Define Number of rounds and lucky number variables

    int number_of_rounds, lucky_number, secret_number,remainder,total_score;
    total_score = 0;

    // Generate a random secret number between 1 and 10 (inclusive)
    secret_number = rand() % 10 + 1;

    printf("Number of Rounds\n");
    scanf("%d",&number_of_rounds);

    //Loop through each loop

//Initialize a counter i which begins to count the number of rounds from 1
//The loop will continue to execute as long as i is greater than the number of rounds
    for(int i = 1; i<=number_of_rounds; i++){

        printf("Lucky Number\n");
        scanf("%d",&lucky_number);}
        //To get the remainder we need to use modulo
        remainder = lucky_number%secret_number;

   
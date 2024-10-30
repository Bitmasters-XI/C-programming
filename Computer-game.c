#include <stdio.h>
int main()
{
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
   if(remainder==0)
        {
            total_score=total_score+1;
            round++;
            printf("You have earned one point!\n");

        }else if(remainder%2==0)
        {
            total_score=total_score+3;
            round++;
            printf("You have earned three points!\n");

        }else
        {
            total_score=total_score-3;
            round++;
            printf("You have lost three points!\n");
        }
        }
    printf("Score:%d\n",total_score);
    if(total_score > 0)
    {
        printf("You won!\n");
    } else
    {
        printf("You lost\n");
    }
    return 0;
}
     

   
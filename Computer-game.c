#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand (time(0));
    int rounds =0, lucky_number, secret_number, no_of_rounds, remainder, total_score =0;

    printf("\nEnter number of rounds you wish to play: \n");
    scanf("%d", &no_of_rounds);
    rounds=rounds+ no_of_rounds;

    while (rounds>=1)
    {
        secret_number= rand()%10 +1;
        printf("\nEnter your lucky number: \n");
        scanf("%d", &lucky_number);
        remainder= lucky_number%secret_number;

        if(remainder==0)
        {
            printf("good attempt, you have earned 1 point \n\n");
            total_score= total_score+1;
        }
        else if(remainder%2==0)
        {
            printf("Congrats, you have earned 3 points \n\n");
            total_score= total_score+3;
        }
        else
        {
           printf("Oops, you have lost 3 points, \n\n");
           total_score= total_score-3;
        }


        rounds=rounds-1;

    }
    if(total_score>0)
    {
        printf("\n You are the winner!");
    }
    else
    {
        printf("You lost, better luck next time ");
    }
    return 0;
}


// PSEUDOCODE:
//  START
//     INITIALIZE random seed using current time
//     DECLARE variables:
//         rounds, lucky_number, secret_number, no_of_rounds, remainder, total_score
//     SET total_score to 0

//     PRINT "Enter number of rounds you wish to play:"
//     INPUT no_of_rounds
//     SET rounds to no_of_rounds

//     WHILE rounds >= 1 DO
//         SET secret_number to a random number between 1 and 10
//         PRINT "Enter your lucky number:"
//         INPUT lucky_number

//         SET remainder to lucky_number MOD secret_number

//         IF remainder == 0 THEN
//             PRINT "Good attempt, you have earned 1 point"
//             INCREMENT total_score by 1
//         ELSE IF remainder MOD 2 == 0 THEN
//             PRINT "Congrats, you have earned 3 points"
//             INCREMENT total_score by 3
//         ELSE
//             PRINT "Oops, you have lost 3 points"
//             DECREMENT total_score by 3
//         END IF

//         DECREMENT rounds by 1
//     END WHILE

//     IF total_score > 0 THEN
//         PRINT "You are the winner!"
//     ELSE
//         PRINT "You lost, better luck next time"
//     END IF
// END

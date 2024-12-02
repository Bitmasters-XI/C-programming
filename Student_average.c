#include <stdio.h>
#include <stdlib.h>

int main()
{
    char admission_no[1] [10];
    char stud_surname[1] [10];
    int mark1, mark2, mark3;
    float average_mark;
    char choice='Y';
    while (choice == 'Y' || choice=='y'){
        printf("Enter student's admission number: ");
        scanf("%s", &admission_no);
        printf("Enter student's surname: ");
        scanf("%s", &stud_surname);
        printf("Enter the students marks\n");
        scanf("%d%d%d", &mark1, &mark2, &mark3);
        average_mark=(mark1+mark2+mark3)/3;

        //displaying of the results
        printf("Admission number:%s\n ", admission_no);
        printf("Surname:%s\n ", stud_surname);
        printf("Mark1: %d\n ", mark1);
        printf("Mark2: %d\n ", mark2);
        printf("Mark3: %d\n ", mark3);
        printf("Average mark:%f\n ", average_mark);


        //determining and displaying the students Grade
         if (average_mark>=70)
            printf("Grade= A\n");
         else if (average_mark>=60)
            printf("Grade= B\n");
         else if (average_mark>=50)
            printf("Grade= C\n");
         else if (average_mark>=40)
            printf("Grade= D\n");
         else
           printf("Grade= D\n");

      //asking the user if they want to continue

         printf("Do you want to enter another student's marks? (Y/N): ");
         scanf(" %c", &choice);
    }

return{0};
}
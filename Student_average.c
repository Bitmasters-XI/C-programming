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

return 0 ;
}



// START
//     DECLARE variables:
//         admission_no (ARRAY of CHAR), stud_surname (ARRAY of CHAR)
//         mark1, mark2, mark3 (INTEGER)
//         average_mark (FLOAT)
//         choice (CHAR), initialize to 'Y'

//     WHILE choice is 'Y' OR 'y' DO
//         PRINT "Enter student's admission number:"
//         INPUT admission_no

//         PRINT "Enter student's surname:"
//         INPUT stud_surname

//         PRINT "Enter the student's marks:"
//         INPUT mark1, mark2, mark3

//         SET average_mark to (mark1 + mark2 + mark3) / 3

//         PRINT "Admission number:" admission_no
//         PRINT "Surname:" stud_surname
//         PRINT "Mark1:" mark1
//         PRINT "Mark2:" mark2
//         PRINT "Mark3:" mark3
//         PRINT "Average mark:" average_mark

//         // Determine and display the grade
//         IF average_mark >= 70 THEN
//             PRINT "Grade = A"
//         ELSE IF average_mark >= 60 THEN
//             PRINT "Grade = B"
//         ELSE IF average_mark >= 50 THEN
//             PRINT "Grade = C"
//         ELSE IF average_mark >= 40 THEN
//             PRINT "Grade = D"
//         ELSE
//             PRINT "Grade = F"
//         END IF

//         // Ask if user wants to continue
//         PRINT "Do you want to enter another student's marks? (Y/N):"
//         INPUT choice
//     END WHILE

// END

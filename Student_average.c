#include <stdio.h>
#include <stdlib.h>

int main()
{
    char surname[1][10],admission_no[1][10],choice='Y';
    int mark1,mark2,mark3;
    float average_mark;

    //Displaying of the results
    while(choice == 'Y'|| choice == 'y'){
        printf("Enter student's surname: \n");
        scanf("%s", &surname);
        printf("Enter student's admission number: \n");
        scanf("%s", &admission_no );
        printf("Enter student's marks: \n");
        scanf("%d%d%d", &mark1,&mark2,&mark3);
    }}
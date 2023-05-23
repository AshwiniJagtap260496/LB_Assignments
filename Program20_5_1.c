//Accept division of student from user and depends on the division display exam timing.
//There are 4 divisions in school as A, B, C, D.
//Exam of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM
//(Application should be case sensitive)
/*
Input  :  C
Output : Your exam at 9.20 AM

Input  :  d
Output :  Your exam at 10.30 AM
*/

#include<stdio.h>

void DisplaySchedule(char cDiv)
{    
    int Gap = 'a' - 'A';
    //updator
    if((cDiv >= 'a') && (cDiv <= 'z'))
    {
        cDiv = cDiv - Gap;
    }
    
    switch(cDiv)
    {
        case 'A':
           printf("Your exam at 7 AM\n");
           break;
        case 'B':
           printf("Your exam at 8.30 AM\n");
           break;
        case 'C':
            printf("Your exam at 9.20 AM\n");
            break;
        case 'D':
            printf("Your exam at 10.30 AM\n"); 
            break;
        default:
            printf("Invalid Input\n");   
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character: \n");
    scanf("%c", &cValue);

    DisplaySchedule(cValue);

    return 0;
}
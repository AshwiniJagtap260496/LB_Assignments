//Write a program which accepts name from user and print that name

/*
Input    :     Piyush Khairnar
Output   :     Piyush Khairnar

*/

#include<stdio.h>

int main()
{
    char Name[30];

    printf("Please enter full name: \n");
    scanf("%[^\n]s", Name);                           //gets(Name);    

    printf("Your name is %s\n ", Name);
}
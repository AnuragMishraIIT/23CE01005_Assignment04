/*
    LAB ASSIGNMENT: 04
    Question number: 04

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 02/02/2024
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number to print the corresponding day:\n");
    scanf("%d", &n);

    switch (n)
    {
    case 1:
    printf("Monday.\n");
    break;

    case 2:
    printf("Tuesday.\n");
    break;

    case 3:
    printf("Wednesday.\n");
    break;

    case 4:
    printf("Thursday.\n");
    break;

    case 5:
    printf("Friday.\n");
    break;

    case 6:
    printf("Saturday.\n");
    break;

    case 7:
    printf("Sunday.\n");
    break;

    default:
    printf("Incorrect input.\n");
    break;
    }
    return 0;
}
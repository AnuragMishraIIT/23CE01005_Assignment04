/*  
    LAB ASSIGNMENT: 04
    Question number: 01

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 02/02/2024
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter an integer number:\n");
    scanf("%d",&n);
    
    switch(n%2)
    {
        case 0:
        printf("The integer %d is even.\n",n);
        break;

        case 1:
        printf("The integer %d is odd.\n",n);
        break;
    }
    return 0;
}
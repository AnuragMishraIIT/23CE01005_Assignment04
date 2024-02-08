/*  
    LAB ASSIGNMENT: 04
    Question number: 06

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 02/02/2024
*/

#include <stdio.h>

int main()
{
    int a,b;
    char oper;
    printf("Enter the two integer numbers (in order):\n");
    scanf("%d %d",&a,&b);
    printf("Enter the operation to be performed (+,-,*,/):\n");
    scanf(" %c",&oper);
    
    switch(oper)
    {
        case '+':
        printf("The sum of the two numbers %d and %d is: %d\n",a,b,(a+b));
        break;

        case '-':
        printf("The difference of the two numbers %d and %d is: %d\n",a,b,(a-b));
        break;

        case '*':
        printf("The product of the two numbers %d and %d is: %d\n",a,b,(a*b));
        break;

        case '/':
        printf("The division of the two numbers %d and %d is: %.5f\n",a,b,((float)a/(float)b));
        break;

        default:
        printf("Input error. Program terminating.\n");
        return 1;
    }
    return 0;
}
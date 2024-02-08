/*  
    LAB ASSIGNMENT: 04
    Question number: 05

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 02/02/2024
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n,a,b,c,sum=0;
    printf("Enter a 3-digit number to determine if it is an Armstrong number or not:\n");
    scanf("%d",&n);

    switch((n<100) || (999<n))
    {   
        case 1:
        printf("Incorrect input.\n");
        return 1;

        case 0:
        a=n/100;
        b=(n/10)-(10*a);
        c=n%10;
        sum=(pow(a,3)+pow(b,3)+pow(c,3));

        switch (n==sum) 
        {
            case 1:
            printf("Yes.\n");
            break;

            case 0:
            printf("No.\n");
            break;
        }
    }
    return 0;
}
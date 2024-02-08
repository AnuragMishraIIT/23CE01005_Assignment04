/*  
    LAB ASSIGNMENT: 04
    Question number: 07

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 02/02/2024
*/

#include <stdio.h>

int main()
{
    int n, price;

    printf("Enter the age of the person:\n");
    scanf("%d", &n);

    if (0 <= n && n < 5)
    {
        price = 0;
    }
    else if (5 <= n && n <= 12)
    {
        price = 20;
    }
    else if (13 <= n && n <= 59)
    {
        price = 50;
    }
    else if (n >= 60)
    {
        price = 50 * 20 / 100;
    }
    else
    {
        printf("Input error. Program terminating.\n");
        return 1;
    }

    printf("The price of the ticket is %d\n", price);
    return 0;
}

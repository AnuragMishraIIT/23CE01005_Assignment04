/*  
    LAB ASSIGNMENT: 04
    Question number: 03

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 02/02/2024
*/

#include <stdio.h>

int main()
{
    float bal,score,in;
    printf("Enter the credit card balance:\n");
    scanf("%f",&bal);
    printf("Enter the credit card score:\n");
    scanf("%f",&score);
    
    switch(score>750)
    {
    case 1:
    in =(bal*0.10);
    break;

    case 0:
        switch((score<=750)&&(score>=600))
        {
            case 1:
            in=(bal*0.12);
            break;

            case 0:
            in=(bal*0.15);
            break;
        }
    break;
    }
    printf("The calculated interest is Rs. %.2f\n",in);
    return 0;
}
/*  
    LAB ASSIGNMENT: 04
    Question number: 02

    Roll number: 23CE01005
    Name: Anurag Mishra
    Branch: Civil Engineering
    Date: 02/02/2024
*/

#include <stdio.h>

int main()
{
    int a,b,c,lar;
    printf("Enter the three integer numbers one-by-one:\n");
    scanf("%d %d %d",&a,&b,&c);

    switch(a>b)
    {
        case 1:
        switch(a>c)
        {
            case 1:
            lar=a;
            break;

            case 0:
            lar=c;
            break;
        }
        break;

        case 0:
        switch(b>c)
        {
            case 1:
            lar=b;
            break;

            case 0:
            lar=c;
            break;
        }
        break;
    }

    printf("The largest number among %d, %d and %d is: %d\n",a,b,c,lar);
    return 0;
}
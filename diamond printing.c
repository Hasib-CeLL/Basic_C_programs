#include <stdio.h>
int main()
{
    int i,j,k;

    //Upper triangle printing.


    for(i=1 ; i<=5 ; i++)
    {   printf("          ");
        for(j=i ; j<5 ; j++)
        {
            printf(" ");
        }
        for(k=1 ; k<=i ; k++ )
        {
            printf("* ");
        }
        printf("\n");
    }

    //Lower triangle printing.

    for(i=6 ; i<=10 ; i++)
    {   printf("          ");
        for(j=i ; j>10 ; j--)
        {
            printf(" ");
        }
        for(k=1 ; k>=i ; k--)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

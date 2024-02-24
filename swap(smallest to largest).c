#include <stdio.h>
int main()
{
    int i,j,temp;
    int input[5] = {46,99,69,96,13} ;
    for(j=4 ; j>=0 ; j--)
    {

        for(i=0; i<=4; i++)
        {
            if(input[i] > input[i+1])
            {
                temp = input[i];
                input[i] = input[i+1];
                input[i+1] = temp;

            }

        }
    }
    for (i=0; i<5; i++)
    {
        printf("%d ",input[i]);
    }

    return 0;
}

#include <stdio.h>
int main()
{
    int i , max ;
    int A[9] = {35,40,45,13,7,99,2,9,1} ;
    max = A[0];
    for(i=1 ; i<9 ; i++)
    {
        if(max<A[i])
        {
            max = A[i] ;
        }
    }
    printf("%d ",max);

    return 0;
}

#include <stdio.h>
int main()
{
    int i , j , temp  ;
    int input[5] = {13,65,54,87,45} ;
    for(j= 5 ; j>= 0 ;j--)
    {
        for(i=0 ; i<j ; i++)
        {
            if(input[i] > input[i+1])
            {
                temp = input[i] ;
                input[i]= input[i+1] ;
                input[i+1] = temp ;
            }
        }
    }
    for(i=0 ; i<5 ; i++)
    {
        printf("%d  ",input[i]) ;
    }


    return 0 ;
}

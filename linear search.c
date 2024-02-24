#include <stdio.h>
int main()
{
    int i, item, position;
    item = 44 ;
    position =-1 ;
    int num[ ] = {43,54,51,65,12,23} ;
    for(i=0 ; i<6 ; i++)
    {
        if(num[i] == item)
        {
            position = i + 1 ;
            break ;
        }
    }
        if(position == -1)
        {
            printf("The item is not available\n") ;
        }
        else printf("The item is found at %d index\n",position) ;



    return 0 ;
}

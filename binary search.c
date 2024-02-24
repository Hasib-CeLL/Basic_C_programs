#include <stdio.h>
int main()
{
    int num[ ] = {10,20,30,40,50,60,70,80} ;
    int left,right,middle ;
    left = 0 ;
    right = 7 ;
    int item = 80 ;
    while(left<=right)
    {
        middle = (left+right)/2 ;
        if(num[middle] == item)
        {
            printf("The item is found at %d position",middle) ;
            return 0 ;
        }
        else if(num[middle] < item)
        {
            left = middle + 1 ;
        }
        else
        {
            right = middle - 1;
        }
    }
    printf("Item not found\n") ;

    return 0 ;
}

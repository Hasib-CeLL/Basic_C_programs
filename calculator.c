#include <stdio.h>
int main()
{
    int a,b,result;
    char op;
    scanf("%d %d",&a,&b);
    getchar();
    scanf("%c",&op);
    if(op=='+'){
        result=a+b;
    }
    printf("%d",result);
    if(op=='-'){
        result=a-b;
    }
    printf("%d",result);
    if(op=='*'){
        result=a*b;
    }
    printf("%d",result);
    if(op=='/'){
        result=a/b;
    }
    printf("%d\n",result);



return 0;

}

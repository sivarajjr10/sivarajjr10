#include<stdio.h>
int main()
{
for(fun();fun();fun())
{
printf("%d",fun());
}
return 0;
}
int fun()
{
    static int num=10;
    return num--;
}

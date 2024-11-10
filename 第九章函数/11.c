#include<stdio.h>
int fibonacci(int n)
{
    if(n==1)
    return 1;
    int a=0,b=1,c;
    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main()
{
    int n;scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d  ",fibonacci(i));
    }

    return 0
}
#include<stdio.h>

int fact(int n);
void main()
{
int n,facto;
printf("enter a no for factorial");
scanf("%d",&n);
facto=fact(n);
printf("factorial=%d",facto);
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else if(n==1)
    {
        return n;
    }
        else
        {
    return n*fact(n-1);
     }
}

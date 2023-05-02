#include<stdio.h>

#include<conio.h>
void fibo(int n);
void main()
{
    int n,a=0,b=1;
    printf("enter a no of elements");
    scanf("%d",&n);
     printf("%d \n",a);
     printf("%d \n",b);
    fibo(n-2);

  
}
void fibo(int n){    
    static int n1=0,n2=1,n3;    
    if(n>0){    
         n3 = n1 + n2;    
         n1 = n2;    
         n2 = n3;    
         printf("%d\n",n3);    
         fibo(n-1);    
    }    
} 

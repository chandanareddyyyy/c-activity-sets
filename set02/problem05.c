//05.  Write a program to find GCD _(HCF)_ of two numbers.
#include<stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);
int input()
{
    int x;
    printf("Enter the two numbers");
    scanf("%d",&x);
    return x;
}
int find_gcd(int a, int b)
{
    int x;
    if(a>b)
    {
         x=a;
    }
    else{ x=b;
    }
    for(int i=x ;i=0;i--)
    {
           if(a%i==0&&b%i==0)
           {
             return i;
             
           }
        
    }
    

}
void output(int a, int b, int gcd)
{
    printf("the GCD of %d and %d is %d",a,b,gcd);
}
int main()
{
    int a,b,gcd;
   a = input();
   b= input();
   gcd=find_gcd( a, b);
   output( a, b, gcd);
}
//2. Write a C program to add two numbers.
#include<stdio.h>
int input(int a, int b)
{
   int x;
   printf("Enter the two numbers");
   scanf("%d",&x);
   return x;

}
int add(int a, int b)
{
    int sum;
    sum=a+b;
    return sum;

}
int output(int a ,int b, int sum)
{
    printf("the sum of %d and %d is %d",a,b,sum);
}
int main()
{
    int a,b,sum;
    a=input(a,b);
    b=input(a,b);
    sum=add(a,b);
    output(a,b,sum);
    return 0;
}
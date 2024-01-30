//3. Write a C program to add two numbers using **pass by value**

#include<stdio.h>
int input();
int add(int a, int b);
void output(int a, int b, int sum);
int input()
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
void output(int a ,int b, int sum)
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
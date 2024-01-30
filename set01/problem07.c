// Write a C program to find sum of all natural numbers until _n_
#include<stdio.h>
int input_n();
int sum_n_nos(int n);
void output(int n, int sum);
int input_n()
{
    int x;
    printf("Enter the natural number");
    scanf("%d",&x);
    return x;
}
int sum_n_nos(int n)
{
    int sum=0;
    for( int i=0;i<=n;i++)
    {
        sum=sum+i;
        
    }
    
    return sum;
}
void output(int n, int sum)
{
    printf("the sum of numbers until %d is %d",n,sum);
}
int main()
{
    int n,sum=0;
    n=input_n();
    sum=sum_n_nos(n);
    output(n,sum);
    return 0;

}
// why sum gives garbage value and why does sum=0 not give garbage value?
// sum takes random value if not defined with a value.

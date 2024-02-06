// 9. Write a C program to find the [square root](https://en.wikipedia.org/wiki/Methods_of_computing_square_roots#Babylonian_method) of a number.

#include<stdio.h>
float input();
float square_root(float n);
void output(float n, float sqrroot);
float input()
{
    int n=0;
    printf("Enter the number");
    scanf("%d",&n); // Always keep the take in %d
    return n;
}
float square_root(float n)
{
    int x=0,err=0.00001;
    x=n/2;
    while(((x*x)-n)>err || (n-(x*x)>err))  //the loop continues until the square of x is close enough to n.
    {
        x=0.5*(x+(n/x));
    }
    return x;
    
    
}
void output(float n, float sqrroot)
{
    printf("the sqaure root of %f is %f",n,sqrroot);
}
int main()
{
    float n=0,sqrroot;
    n=input();
    sqrroot=square_root(n);
    output(n,sqrroot);
    return 0;


}


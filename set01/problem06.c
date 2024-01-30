// 6. Write a C program to compare three numbers using **pass by reference**

#include<stdio.h>
void input(int *a, int *b, int *c);
void compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);
void input(int *a, int *b, int *c)
{
    
    printf("Enter the Three Numbers");
    scanf("%d%d%d",a,b,c);
    
}
void compare(int a,int b,int c, int *largest)
{
    *largest=a;
    if(b>a)
    {
        *largest=b;
    }
    else if(c>a)
    {
        *largest=c;
    }
}
void output(int a, int b, int c, int largest)
{
    printf("The largest among %d,%d and %d is %d",a,b,c,largest);
}
int main()
{
    int a,b,c,largest;
    input(&a,&b,&c);
    compare(a,b,c,&largest);
    output(a,b,c,largest);
    return 0;

}

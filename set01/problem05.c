// 5. Write a C program to compare three numbers using **pass by value**

#include<stdio.h>
int input();
int compare(int a, int b, int c);
void output(int a, int b, int c, int largest);
int input()
{
    int x;
    printf("Enter the three Numbers");
    scanf("%d",&x);
    return x;
}
int compare(int a, int b, int c)
{
    int largest=a;
    if(b>a)
    {
      largest=b;  
    }
    else if (c>a)
    {
        largest=c;
    }
    return largest;
}
void output(int a, int b,int c, int largest)
{
    printf(" The largest out of %d , %d and %d is %d",a,b,c,largest);
}
int main()
{
    int a,b,c,largest;
    a=input();
    b=input();
    c=input();
    largest=compare(a,b,c);
    output(a,b,c,largest);
    return 0;


}
// 04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);
int input_array_size()
{
    int n;
    printf("Enter the array size");
    scanf("%d",&n);
    return n;

}
void input_array(int n, int a[n])
{
    printf("Enter the array Elements");
    scanf("%d",&a[n]);
}


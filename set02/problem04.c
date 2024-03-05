// 04.  Write a program to find Sum of composite number in an array of different numbers entered by the user.
#include<stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n],int sum);
void output(int sum);
int input_array_size()
{
    int n;
    printf("Enter the array size\n");
    scanf("%d",&n);
    return n;

}
void input_array(int n, int a[n])
{
    printf("Enter the array Elements\n");
    for(int i=0;i<=n-1;i++)
    {
    scanf("%d",&a[i]);
    }
}
int sum_composite_numbers(int n, int a[n],int sum)
{ 
       for (int j=0;j<=n-1;j++)
   {
         for(int i=2;i<=a[j]/2;i++)
      {
           if(a[j]%i==0)
         {
           sum= sum + a[j];
           break;
           
         }
        
       }
      
   }
   return sum;   
     
}
void output(int sum)
{
    printf("The sum of Composite numbers present in the array is %d",sum);
}
int main()
{
    int sum=0,n;
    n=input_array_size();
    int a[n];
    input_array( n, a);
    sum =sum_composite_numbers( n, a,sum);
     output(sum);
}



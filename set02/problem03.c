// 03.  Write a program find whether a number is a composite number
#include<stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);
int input_number()
{
    int x;
    printf("Enter the number\n");
    scanf("%d",&x);
    return x;
}
int is_composite(int n)
{
    if (n<=1)
    {
        return 0;
    }
    for(int i=2;i<n/2;i++)
    {
        if(n%i==0){
            return 1;
        }
        
    }
    return 0;
}
void output(int n, int result)
{
    if (result==0){
        printf("%d is not composite number",n);
    }
    else if(result==1){
        printf("%d is composite number",n);

    }
}
int main()
{
    int n, result;
    n=input_number();
    result=is_composite(n);
    output(n, result);

}




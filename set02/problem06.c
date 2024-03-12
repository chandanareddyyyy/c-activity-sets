//06. Write a program to reverse a string.

#include<stdio.h>
#include<string.h>
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
void input_string(char *a)
{
    printf("Enter the string you want to reverse");
    scanf("%s",a);
}
void str_reverse(char *str, char *rev_str)
{
 int n = strlen(str);
 for(int i=n-1,j=0;i>=0,j<=n-1;i--,j++)
 {
    rev_str[j]=str[i];
 }
}
void output(char *a, char *reverse_a)
{
    printf("The sting %s when reversed is %s",a,reverse_a);

}
int main()
{
    char str[50],rev_str[50];
    input_string(str);
    str_reverse(str,rev_str);
    output(str,rev_str);
}
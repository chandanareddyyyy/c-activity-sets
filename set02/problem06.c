//06. Write a program to reverse a string.

#include<stdio.h>
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
 while(str[i]!='\0')
 {
    rev_str[i]=str[i];
 }
}
void output(char *a, char *reverse_a)
{
    printf("The sting %c when reversed is %c");
}
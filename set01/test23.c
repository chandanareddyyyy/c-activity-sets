//10. Write a C program to compare two strings, character by character.

#include <stdio.h>
#include <string.h>

void input_two_strings(char *string1, char *string2);
int stringcompare(char *string1, char *string2);
void output(char *string1, char *string2, int result);
void input_two_strings(char *string1, char *string2)
{
    printf("Enter the first word");
    scanf("%s",*string1);
    printf("Enter the second word");
    scanf("%s",*string2);
    
}
int stringcompare(char *string1, char *string2)
{
    int i=0;
    int n=0;
    for(i=0; string1[i]==string2[i] && string1[i]!='\0' && string2[i]!='\0'; i++ )
    {
         n= string1[i]-string2[i];
         
    }
    return n;
}
void output(char *string1, char *string2, int result)
{
    if(result>0)
    {
        printf("%s is greater than %s",string1,string2);
    }
    else if(result<0){
        printf("%s is greater than %s",string2,string1);
    }
    else{
        printf("%s and %s are equal",string1,string2);
    }
}
int main()
{
    char *string1, *string2;
    input_two_strings(&string1, &string2);
    int result = stringcompare(&string1, &string2);
    output(&string1,&string2,result);
    return 0;



}

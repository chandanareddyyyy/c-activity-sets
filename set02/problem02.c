// 02.  Write a program to find if a triangle is scalene.
#include<stdio.h>
int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);
int input_side()
{
    int x;
    printf("Enter the sides  of the triangle\n");
    scanf("%f",x);
    
}
int check_scalene(int a, int b, int c){
    if(a!=b && b!=c && c!=a)
    {
        return 0;
    }
    else{
        return 1;
    }
}
void output(int a, int b, int c, int isscalene)
{
    if(isscalene=2){
    printf(" The triangle is Scalene");
    }

    if(isscalene=1)
    {
        printf("the Triangle is not Scalene");
    }
}
int main()
{
    int a,b,c,isscalene;
    a = input_side();
    b= input_side();
    c=input_side();
    isscalene = check_scalene(a, b, c);
    output(a, b, c, isscalene);
    return 0;


}

















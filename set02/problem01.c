//1.  Write a program to find the area of a triangle.
#include<stdio.h>
void input(float *base, float *height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);
void input(float *base, float *height)
{
    printf("Enter the base of the Triangle\n");
    scanf("%f",base);
    printf("Enter the Height of the Triangle\n");
    scanf("%f",height);
}
void find_area(float base , float height, float *area)
{
   *area = ((0.5)*height*base);
}
void output(float base, float height, float area)
{
    printf("the Area of the Triangle is %.2f\n",area);
}
int main ()
{
    float base,height,area;
    input(&base, &height);
    find_area(base, height, &area);
    output(base, height, area);
    return 0;


}





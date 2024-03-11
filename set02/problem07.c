//07. Write a program to find the area of a triangle.
#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
Triangle input_triangle()
{
    Triangle num;
    Printf("Enter the base of the Triangle");
    scanf("%f",&num.base);
    Printf("Enter the altitude of the Triangle");
    scanf("%f",&num.altitude);

}
void find_area(Triangle *t)
{

}

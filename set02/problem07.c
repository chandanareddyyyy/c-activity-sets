// 07. Write a program to find the area of a triangle.
#include <stdio.h>
typedef struct _triangle
{
    float base, altitude, area;
} Triangle;

Triangle input_triangle();
void find_area(Triangle *t);
void output(Triangle t);
Triangle input_triangle()
{
    Triangle num;
    printf("Enter the base of the Triangle");
    scanf("%f", &num.base);
    printf("Enter the altitude of the Triangle");
    scanf("%f", &num.altitude);
    return num;
}
void find_area(Triangle *t)
{

    t->area = (0.5 * (t->base) * (t->altitude));
}
void output(Triangle t)
{
    printf("the area of the triangle with base %f and altitude %f is %f", t.base, t.altitude, t.area);
}
int main()
{
    Triangle t;
    t = input_triangle();
    find_area(&t);
    output(t);
}

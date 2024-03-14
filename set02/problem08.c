// 08. Write a program to find the triangle with smallest area in n given triangles.
#include<stdio.h>
typedef struct _triangle {
	float base, altitude, area, n_area;;
} Triangle;
int input_n();

Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n],Triangle n_area);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);
Triangle input_triangle()
{
	Triangle n;
   printf("Enter the Number of Triangles you wanna compare ");
   scanf("%d",&n);
   return n;
}
void input_n_triangles(int n, Triangle t[n])
{      for( int i=0;i<n-1;i++)
    {
	printf("Enter the base and altitude");
	scanf("%f",t[i,i]);
		}
}
void find_area(Triangle *t)
{
	t->area=(0.5*(t->base*t->altitude));
}
void find_n_areas(int n, Triangle t[n], Triangle n_area)
{
       
	   for (int i = 0; i < n-1; i++) {
        n_area = find_area(t[i,i]);
    }
    
    return n_area;
}


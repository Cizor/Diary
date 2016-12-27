#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define CHECK_TRIANGLE(x,y,z) (((x) == (y) && (y) == (z)) ? "EQUILATERAL" : \
								((x) == (y) && (x) != (z) || (x) != (y) && (y) == (z) || (x) == (z) && (x) != (y))?"ISOSCELES":"SCALENE") 

main(){
	double l[3]={0,0,0};
	double a[3]={0,0,0};
	printf("\nTRIANGLES\n");
	printf("\nEnter first side length : ");
	scanf("%lf",&l[0]);
	printf("\nEnter second side length : ");
	scanf("%lf",&l[1]);
	printf("\nEnter third side length : ");
	scanf("%lf",&l[2]);
	printf("TRIANGLE IS %s\n",CHECK_TRIANGLE(l[0],l[1],l[2]));
}

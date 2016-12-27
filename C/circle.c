#include <stdio.h>
#include <math.h>

#define PI 3.14
#define AREA(x) (PI * pow(x,2))
#define CIRCUMFERENCE(x) (2 * PI * x)


main(){
	double radius = 0;
	printf("\nArea and Circumference of Circle\n");
	printf("Enter radius of circle\n");
	scanf("%lf",&radius);
	printf("Area of circle is %lf\n",AREA(radius));
	printf("Circumference of circle is %lf\n",CIRCUMFERENCE(radius));
}


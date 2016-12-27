#include <stdio.h>
#include <math.h>
void fibo(int x, int y, int counter){
	static int sum = 0;
	sum = x + y;
	printf("%d\n",sum);
	x = y;
	y = sum;
	counter--;
	if(counter != 0) {
		fibo(x,y,counter);
	}
}
main(){
	int a = 0, b = 0, next = 0,count = 0,i =0;
	printf("\nFibonacci Series\n");
	printf("Enter first number: ");
	scanf("%d",&a);
	printf("Enter second number: ");
	scanf("%d",&b);
	printf("How many numbers you want?");
	scanf("%d",&count);
	printf("Series is:\n");
	printf("%d\n%d\n",a,b);
	fibo(a,b,count-2);
#if 0
//Without Recursion
	for(i = 0;i<count;i++){
		next = a + b;
		printf("%d\n",next);
		a = b;
		b = next;
	}
#endif	
}

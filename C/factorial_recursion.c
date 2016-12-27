#include <stdio.h>
int factorial(int num){
	static int fact = 1;
	fact = fact * num;
	num--;
	if(num != 0){
		factorial(num);
	}
	return fact;
}
void main(){
	int number = 0;
	printf("Enter number for factorial:\n");
	scanf("%d",&number);
	printf("Factorial of number is %d\n",factorial(number));
}

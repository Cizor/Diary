#include <stdio.h>
#include <math.h>

main(){
	int number = 0,i = 0;
	int reversed = 0,left = 0;
	printf("\nEnter your number: ");
	scanf("%d",&number);
	int length = (int)ceil(log10(abs(number)));
	for(i = 0; i < length;i++){
		left = number % 10;
		reversed = reversed + left * pow(10,length - i - 1 );
		number = number / 10;
	}
	printf("Reversed is : %d", reversed);
}

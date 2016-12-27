#include <stdio.h>

void baseFuncPointer(int b,int (*troll)()){
	printf("Value of b is %d\n",b);
	printf("Value of b is %d\n",troll());
}

void (*callback)(int,int(*)());
int intPointerReturn(){
	return 25;
}
int main(){
	int a = 10;
	callback = baseFuncPointer;
	callback(a,intPointerReturn);
	printf("value of callback %lu\n",sizeof(callback));
}

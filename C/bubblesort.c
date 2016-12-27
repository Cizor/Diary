#include <stdio.h>

void swap(int a,int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}


int main(){
	int i =0,temp = 0;
	int a[10]={4,2,5,7,1,8,9,3,6,0};
	int counter = 0;
	while(counter < 10){
		for(i = 0;i < 9;i++){
			if(a[i] > a[i+1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
		counter++;
	}
	for(i = 0;i < 10;i++){
		printf("%d\n",a[i]);
	}
}

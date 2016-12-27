#include<stdio.h>

int main(){
	int a[10]={4,36,8,6,17,15,100,12,98,65};
	int i = 0,j = 0;
	int temp = 0;
	for(j = 0; j < 8;j++){
		for(i = 0;i < 9;i++){
			if(a[i] > a[i+1]){
				temp = a[i];
				a[i] = a[i+1];
				a[i+1] = temp;
			}
		}
	}
	for(i = 0;i < 10;i++){
		printf("%d\n",a[i]);
	}
}

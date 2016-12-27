#include <stdio.h>
#include <stdlib.h>

TABnt stack[] = {};
TABnt counter = 0;

void push(){
	int number_push = 0;
	printf("Enter number to be pushed on stack:\n");
	scanf("%d",&number_push);
	stack[counter++] = number_push;
}
void pop(){
	printf("POPPING\n");
	stack[counter] = 0;
	counter--;
}
void stack_length(){
	printf("\nLength : %d",counter);
}

void find_value(){
	int index = 0;
	printf("Enter index :\n");
	scanf("%d",&index);
	(index > counter)?printf("Index is greater than stack size"):printf("value is : %d \n",stack[index]);
}

void insert_at_index(){
	int i_index = 0;
	printf("Enter index :\n");
	scanf("%d",&i_index);
}

main(){
	printf("\nSTACK OPERATIONS USING ARRAYS\n");
	push();
	push();
	pop();
    push();\                              
 	push();
	push();
	stack_length();
	find_value();
}  
        

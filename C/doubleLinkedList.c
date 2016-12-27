#include<stdio.h>
#include<stdlib.h>

struct node{
	int num;
	struct node *next;
	struct node *prev;
};

struct node *head = NULL;
struct node *current = NULL;

void insert(int a){
	struct node *inserted = (struct node*)malloc(sizeof(struct node));
	inserted->num = a;
	inserted->prev = NULL;
	inserted->next = head;
	head = inserted;
}

void printList(){
	struct node *start = head;

	while( start != NULL){
		printf("Number : %d\n",start->num);
		start = start->next;
	}

}

int main(){
	insert(1);
	insert(2);
	insert(3);
	insert(3);
	insert(3);
	insert(3);
	insert(3);
	printList();
	return 0;
}

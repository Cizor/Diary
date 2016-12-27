#include<stdio.h>
#include<stdlib.h>

struct node{
	int num;
	struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

void insert(int);
void delete(int);
void printAll();
void reverse();
void sort();
int length();
void insertAtNode(int,int);

int main(){
	printf("\nLink List\n");
	insert(1);
	insert(2);
	insert(3);
	insert(4);
	insert(5);
	insert(6);
	insert(7);
	insert(8);
	insert(9);
	insert(10);
	printAll();
	delete(2);
	printf("SEPARATION\n");
	printAll();
	insertAtNode(2,13);
	printf("SEPARATION\n");
	printAll();
	printf("SEPARATION\n");
	//reverse();
	printAll();
	printf("Length of list is : %d\n",length());
	printf("SEPARATION\n");
	sort();
	printAll();
}

void insert(int a){
	struct node *list = (struct node*)malloc(sizeof(struct node));
	list->num = a;
	list->next = head;
	head = list;
}

void printAll(){
	struct node *init = head;
	while (init != NULL){
		printf("Value is %d\n",init->num);
		init = init->next;
	}
}

void delete(int key){
	struct node *del = head;
	struct node *prev = NULL;
	int counter = 0;

	while(counter < key){
		prev = del;
		del = del->next; 
		counter++;
	}
	prev->next = del->next;
	del->next = head;
}

void insertAtNode(int node,int data){
	struct node *ins = head;
	struct node *add = (struct node*)malloc(sizeof(struct node));
	int counter = 0;
	
	while (counter < node){
		ins = ins->next;
		counter++;
	}

	add->num = data;
	add->next = ins->next;
	ins->next = add;
}

void reverse(){
	struct node *current = head;
	struct node *prev = NULL;
	struct node *next;

	while(current != NULL){
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	head = prev;
	
}

int length(){
	struct node *list= head;
	int counter = 0;

	while ( list != NULL){
		list = list->next;
		counter++;
	}
	return counter;
}

void sort(){
	struct node *list = head;
	struct node *next;
	int temp;

	while(list != NULL){
		next = list->next;
		if(list->num > next->num){
			temp = list->num;
			list->num = next->num;
			next->num = temp;
		}
		list = next;
	}
}

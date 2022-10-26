#include <stdio.h>
#include <stdlib.h>

//THIS IS HOW TO INSERT A NODE AT THE BEGINNING OF THE LINKED LIST

struct Node {
	int data;
	struct Node* next; //stores the address of the next node; 
};

struct Node* head; //declared as global; 

void Insert (int x){
	Node* temp = new Node(); //or Node* temp = (Node*)malloc(sizeof( struct Node)); 
	temp->data = x;
	temp->next = head; 
	head = temp; //now head is storing the address of the FIRST NODE; 
}
void Print(){
	Node* temp = head; //this temp is different from the insert function temp
	printf("List is: ");
	while(temp != NULL){
		printf(" %d", temp->data); 
		temp = temp->next;
	}
	printf("\n");
} 

int main (){
	
	head = NULL; 
	
	//the program will ask the user to input some numbers and add them to the linked list; 
	printf("How many numbers? \n ");
	int n, x;
	scanf("%d", &n); 
	
	for(int i = 0; i<n; i++){  //the loop will collect the numbers;
		printf("Enter the number: ");
		scanf("%d", &x);
		Insert(x);
		Print();
	}
	
	return 0; 
}

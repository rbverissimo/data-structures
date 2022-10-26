#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data; 
	struct node* link; 
}; 


//NOTE: THIS CODE IS NOT RUNNING, THIS IS JUST A SKETCH OF HOW TO THINK ABOUT A LINKED LIST; 

struct Node* listHead = NULL; //created the head node in which the array list starts, also declared as global variable; 

int main(){
	
struct Node* temp = (struct Node*)malloc(sizeof(struct Node)); //created the first Node of the list which contains data and link; 
temp->data = 2; //storing data; 
temp->link = NULL; //this one points nowhere  ==> but the first node doesn't point anywhere; 
listHead = temp; //listHead receives the addres of the first node;  

temp = (struct Node*)malloc(sizeof(struct Node)); //second node created using the same variable temp;  
temp->data = 3;
temp->link = NULL; 

struct Node* temp1 = (struct Node*)malloc(sizeof(struct Node)); 
temp1 = listHead; //created a variable temp1 that will recieve the address to the head; 
printf("%d\n", temp1);
printf("%d\n", listHead);
printf("%d\n", temp1->link); 


while(temp1->link!=NULL){  //and this loop will run the list collecting the address of the nodes; 
	temp1 = (struct Node*) temp1->link; 
	printf("%d\n", temp1->link); 
}

return 0; 
}

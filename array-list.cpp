#include <stdio.h>
#include <string.h>


//Array are concrete implementations of the list ADT; 

int main(void){
	
	int numbers[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	printf("%d\n", numbers[1]);
	
	numbers[1] = 1000; 
	
	printf("%d\n", numbers[1]);
	
	for(int i = 0; i < 10; i++){
		printf("At index[%d] number is: %d\n", i, numbers[i]); 
	}
	
}

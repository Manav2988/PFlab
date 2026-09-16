#include <stdio.h>
int main(){
	char sl;
	
	printf("Please enter the signal color letter (R for Red, Y for Yellow, G for Green) : ");
	scanf(" %c" , &sl);
	
	switch(sl){
		case'R':
			printf("Action : Stop");
			break;
		case'Y':
			printf("Action : Wait");
			break;
		case'G':
			printf("Action : Go");
			break;
		default:
		printf("Invalid signal color letter entered.");
	}
	return 0;
}

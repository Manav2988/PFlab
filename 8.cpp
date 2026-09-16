#include <stdio.h>
int main(){
	char grade;
	
	printf("Please enter your grade (Use capital letter) : ");
	scanf(" %c" , &grade);
	
	switch(grade){
		case 'A':
			printf("Remarks : Very Good.");
			break;
		case 'B':
			printf("Remarks : Good.");
			break;
		case 'C':
			printf("Remarks : Work  Harder.");
			break;
		case 'D':
			printf("Remarks : Poor.");
			break;
		case 'F':
			printf("Remarks : Fail.");
			break;
		default:
			printf("Invalid grade entered.");
	}
	return 0;
}

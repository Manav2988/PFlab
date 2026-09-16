#include <stdio.h>
int main(){
	int monthnum;
	
	printf("Please Enter the month number : ");
	scanf("%d" , &monthnum);
	switch(monthnum){
		case 1:
			printf("The month number is of : January.");
			break;
		case 2:
			printf("The month number is of : February.");
			break;
		case 3:
			printf("The month number is of : March.");
			break;
		case 4:
			printf("The month number is of : April.");
			break;
		case 5:
			printf("The month number is of : May.");
			break;
		case 6:
			printf("The month number is of : June.");
			break;
		case 7:
			printf("The month number is of : July.");
			break;
		case 8:
			printf("The month number is of : August.");
			break;
		case 9:
			printf("The month number is of : September.");
			break;
		case 10:
			printf("The month number is of : October.");
			break;
		case 11:
			printf("The month number is of : November.");
			break;
		case 12:
			printf("The month number is of : December.");
			break;
		default:
			printf("Invalid month number entered.");
	}
	return 0;
}

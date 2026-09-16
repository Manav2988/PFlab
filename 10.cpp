#include <stdio.h>
int main(){
	int weekdaynum;
	
	printf("Please enter the week day number : ");
	scanf("%d" , &weekdaynum);
	
	switch(weekdaynum){
		case 1:
			printf("The week day number is of : Monday");
			break;
		case 2:
			printf("The week day number is of : Tuesday");
			break;
		case 3:
			printf("The week day number is of : Wednesday");
			break;
		case 4:
			printf("The week day number is of : Thursday");
			break;
		case 5:
			printf("The week day number is of : Friday");
			break;
		case 6:
			printf("The week day number is of : Saturday");
			break;
		case 7:
			printf("The week day number is of : Sunday");
			break;
		default:
			printf("Invalid week day number entered");
	}
	return 0;
}

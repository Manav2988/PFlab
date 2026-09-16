#include <stdio.h>
int main(){
	int num1 , num2;
	
	printf("Please enter the first number : ");
	scanf("%d" , &num1);
	printf("Please enter the second number : ");
	scanf("%d" , &num2);
	
	if(num1 > num2){
		printf("The first number is greater than the second number.");
	}
	else if(num1 < num2){
		printf("The second number is greater than the first number.");
	}
	else{
		printf("Both the numbers are equal.");
	}
}

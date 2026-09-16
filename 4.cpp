#include <stdio.h>
int main(){
	int num1 , num2 , num3;
	
	printf("***PLEASE DO NOT REPEAT THE NUMBERS*** \n \n");
	printf("Please enter the first number : ");
	scanf("%d" , &num1);
	printf("Please enter the second number : ");
	scanf("%d" , &num2);
	printf("Please enter the third number : ");
	scanf("%d" , &num3);
	
	if(num1 < num2){
		if(num1 < num3){
			printf("The first number is the smallest.");
		}
		else{
			printf("The third number is the smallest");
		}
	}
	else{
		if(num2 < num3){
			printf("The second number is the smallest number.");
		}
		else{
			printf("The third number is the smallest.");	
		}
	}
}

#include <stdio.h>
int main(){
	float num1 , num2 , result;
	char op;
	
	printf("Enter the first number : ");
	scanf("%f" , &num1);
	printf("Enter the second number : ");
	scanf("%f" , &num2);
	printf("Enter the operation (+,-,*,/) : ");
	scanf(" %c" , &op);
	
	switch(op){
		case '+' :
			result = num1 + num2;
			printf("The sum is : %.2f" , result);
			break;
			
		case '-' :
			result = num1 - num2;
			printf("The difference is : %.2f" , result);
			break;
			
		case '*' :
			result = num1 * num2;
			printf("The product is : %.2f" , result);
			break;
			
		case '/' :
			result = num1 / num2;
			printf("The division is : %.2f" , result);
			break;	
			
		default :
			printf("Invalid operation entered.");
	}
}

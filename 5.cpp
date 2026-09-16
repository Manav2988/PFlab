#include <stdio.h>
int main(){
	float units , bill , finalbill ;
	float rate = 20;
	
	printf("Please enter the number of units : ");
	scanf("%f" , &units);
	
	bill = rate*units;
	
	if(units < 100){
		finalbill = bill*0.90;
		printf("Your bill after discount is : %.2f" , finalbill);
	}
	else{
		printf("Your bill is : %.2f" , bill);
	}
}

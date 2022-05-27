#include<stdio.h>

int main(){
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	if (x >=100 ){
		if (x>100){
			printf("The number is greater than 100");
		}
		else if(x == 100){
			printf("The number is equal to 100");
		}
	}
	else{
		printf("the number is less than 100");
	}
}

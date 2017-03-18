#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double solveFor(int limit);

int main(){
	double result;
	int userInput;
	
	printf("Upper limit: ");
	scanf("%d", &userInput);
	
	while (userInput>1){	
		result = solveFor(userInput);
		
		printf("Result is %lf\n", result);
		printf("Input 1 or a smaller integer to exit\n");
		printf("Upper limit: ");
		scanf("%d", &userInput);
	}
	return 0;
}

double solveFor(int limit){
	double sum = 0;
	
	int i;
	for(i=1; i<=limit; i++){
		double cur;
		
		if(i%2==0){
			cur = -1;
		}else{
			cur = 1;
		}
		
		int factorial = 1;
		
		int j;
		for(j=2; j<=i; j++){
			factorial = factorial * j;
		}
		
		sum = sum + (cur * factorial / pow(i, i));
	}
	
	return sum;
}

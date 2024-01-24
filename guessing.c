#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int tries(int x); /* function prototype */

int main ( void ){
	
	int guess = 0;
	int counter = 1;
	int number;
	
	srand(time(NULL));
	number = 1 + rand() % 1000;
	
	while(number != guess){
		
		printf("Guess a number from 1 - 1000:\n");
		scanf("%d", &guess);
		
		if( number == guess){
			printf("Correct\n");
			tries(counter);
			
			break;
		}
		else if( number > guess ){
			printf("To Low\n");
			counter++;
		}
		else{
			printf("To High\n");
			counter++;
		}
	}
}

int tries(int x){
	
	if(x > 10){
		printf("you should do better!\n");
	}
	else if(x < 10){
		printf("you either know the secret or got lucky!\n");
	}
	if(x == 10){
		printf("you know the secret!\n");
	}
}

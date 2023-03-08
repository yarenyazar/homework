#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int toDice(){
	
	srand(time(NULL));
	
		int die1;
		int die2;
		
		die1= 1 + rand() % 6;
		die2= 1 + rand() & 6;
		
		return die1 + die2;
}

int main(){
	
	int result = toDice();
	
	if (result == 7 || result == 11){
		
		return printf("you win!");
	}
	else if (result == 2 || result == 3 || result == 12){
		
		return printf("you lose!");
	}
	else {
		
		return printf("your point is: %d", result);
	}
}

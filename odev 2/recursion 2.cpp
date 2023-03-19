#include<stdio.h>

int countDigits(int num){
	
	static int ctr=0;
	
	if(num!=0){
		ctr++;
		countDigits(num/10);
	}
	
	return ctr;
}

int main(){
	
	int number, i;
		printf("enter a number:");
		scanf("%d",&number);
		
		i= countDigits(number);
		
		printf("the number of digits in the number: %d",i);
		return 0;
}



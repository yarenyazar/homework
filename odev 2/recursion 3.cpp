#include<stdio.h>

int displayNumbers(int num){
	if(num==0)
			return 1;
	
	else{
		
			printf("%d\n",num);
			return displayNumbers(num-1);
			}
}

int main(){
	int number;
	
	printf("enter a number:");
	scanf("%d",&number);
	displayNumbers(number);
}

#include <stdio.h>
int fact(int num){
	if(num==1||num==0){
		return 1;
	}
	int result = num * fact(num-1);
	return result;
}
int main(){
	int num1,num2;
	printf("Enter a number : ");
	scanf("%d",&num1);
	printf("Enter a number : ");
	scanf("%d",&num2);
	if(num1>num2){
		printf("Permutation : %d\n",fact(num1)/fact(num1-num2));
		printf("Combination : %d\n",fact(num1)/(fact(num1-num2)*fact(num2)));
	}else{
		printf("Permutation : %d\n",fact(num2)/fact(num2-num1));
		printf("Combination : %d\n",fact(num2)/(fact(num2-num1)*fact(num1)));
	}
	return 0;
}
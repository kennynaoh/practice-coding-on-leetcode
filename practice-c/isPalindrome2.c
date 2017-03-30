#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x){
	if (x<0 || (x>0 && x%10==0)) return false;

	//(x > 0 && x % 10 == 0) -> handle the case '10'

    int sum = 0;
	while(x > sum){
		sum = sum*10 + x%10;
		x /= 10;
	}
	return (x == sum) || (x == sum/10);
}

int main(){
	while(1){
		int input;
		scanf("%d", &input);
		if(isPalindrome(input)){
			printf("true\n");
		}else printf("false\n");
	}
}
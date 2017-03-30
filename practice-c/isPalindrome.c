#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool isPalindrome(int x){
	if(x<0) return false;
	int temp = x;
	int i = 0;
	while(temp != 0){
		temp /= 10;
		i++;
	}
	int *tmp = (int *)malloc(sizeof(int) * i);
	for(int j=i-1;j>-1;j--){
		tmp[j] = x%10;
		x /= 10;
	}

	int flag = 1;
	for(int j=0;j<i/2+1;j++){
		if(tmp[j] != tmp[i-1]){
			flag = 0;
			break;
		}
		i--;
	}
	if(flag == 1) return true;
	else return false;
}

int main(){
	int input;
	while(1){
		scanf("%d", &input);
		if(isPalindrome(input)) {
			printf("true\n");
		}
	}
}
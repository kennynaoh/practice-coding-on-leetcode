#include "stdio.h"
#include "stdlib.h"
#include "limits.h"

int reverse(int x) { 
    long long result = 0; //can't use int
    int remainder;
    while(x != 0){
        remainder = x % 10;
        x /= 10;
        result *= 10;
        result += remainder;
    }
    if (result > INT_MAX || result < INT_MIN) return 0;
    else return result;
}
int main(){
	int input;
    while(1){
        scanf("%d", &input);
        printf("%d\n", reverse(input));
    }
}
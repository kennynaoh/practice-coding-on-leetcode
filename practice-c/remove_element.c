// Given an array and a value, remove all instances of that value in place and return the new length.

// Do not allocate extra space for another array, you must do this in place with constant memory.

// The order of elements can be changed. It does not matter what you leave beyond the new length.

// Example:
// Given input array nums = [3,2,2,3], val = 3

// Your function should return length = 2, with the first two elements of nums being 2.

#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val){
	int count = numsSize;
	for(int i=0;i<numsSize;i++){
		if(nums[i] == val){
			count--;
		}
	}
	return count;
}

int main(){

	printf("how many numbers?\n");
	int numsSize;
	scanf("%d", &numsSize);

	printf("what elements?\n");
	int *inputs = (int *)malloc(sizeof(int) * numsSize);
	for(int i=0;i<numsSize;i++){
		scanf("%d", &inputs[i]);
	}

	printf("remove value?\n");
	int val;
	scanf("%d", &val);

	printf("length after remove: %d\n", removeElement(inputs, numsSize, val));

	return 0;
}
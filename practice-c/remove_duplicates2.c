// Given a sorted array, 
// remove the duplicates in place such that each element 
// appear only once and return the new length.

// Do not allocate extra space for another array, you must do this in place with constant memory.

// For example,
// Given input array nums = [1,1,2],

// Your function should return length = 2, 
// with the first two elements of nums being 1 and 2 respectively. 
// It doesn't matter what you leave beyond the new length.

#include <stdio.h>
#include <stdlib.h>

int removeDuplicates(int* nums, int numSize){
	int count = 1;
	if(numSize == 1) return count;
	for(int i=0;i<numSize-1;i++){
		if(nums[i] != nums[i+1]){
			nums[count++] = nums[i+1];  
			// trick
		}
	}
	return count;
}

// [1,1,2] -> [1,2]

int main(){
	int numSize;
	printf("how many numbers:\n");
	scanf("%d", &numSize);

	int *numArray = (int *)malloc(sizeof(int) * numSize);
	printf("what numbers: \n");
	for(int i=0;i<numSize;i++){
		scanf("%d", &numArray[i]);
	}

	// for (int i = 0; i < numSize; i++) {
	// 	printf("%d\n", numArray[i]);
	// }

	printf("%d\n", removeDuplicates(numArray, numSize));
}
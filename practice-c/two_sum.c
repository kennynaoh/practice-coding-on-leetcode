#include <stdio.h>
#include <stdlib.h>

int *twoSum(int* nums, int numsSize, int target){
    int i,j;
    int flag = 0;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[j] == target - nums[i]){
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }
    int* result = (int*)malloc(sizeof(int) * 2);
    result[0] = i;
    result[1] = j;
    return result;
}

int main(){
    
    int numsSize;
    scanf("%d", &numsSize);

    int target;
    scanf("%d", &target);

    int* nums = (int*)malloc(sizeof(int) * numsSize);
    for(int i=0;i<numsSize;i++){
        scanf("%d", &nums[i]);
    }
    int* result = twoSum(nums, numsSize, target);
    printf("%d\n", result[0]);
    printf("%d\n", result[1]);

    return 0;

}

#include "main.h"

int* twoSum(int* nums, int numSize, int target){

    int indices[2];
    int i = 0;
    int j = 0;

    for(i = 0; i < numSize; i++){
        for(j = 0; j < numSize; j++){
            if(nums[i] + nums[j] == 9){
                indices[0] = i;
                indices[1] = j;
                return indices;
            }
        }
    }

    return indices;
}
#include "main.h"

int main(int argv, char* argc[]){

    //Two Sums variables
    int nums[4] = {2, 7, 11, 15};
    int target = 9;
    int numSize = 4;
    int* indices;

    indices = twoSum(nums, numSize, target);

    printf("Expected Output: [0,1], Computed Output: [%d,%d]\n", indices[0], indices[1]);



}
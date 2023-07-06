#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // Create a dictionary to store identified numbers and their indices
    int* identified = (int*)malloc(2 * sizeof(int) * numsSize);

    for (int i = 0; i < numsSize; i++) {
        int find = target - nums[i];

        // Check if complement is in the identified dictionary
        for (int j = 0; j < i; j++) {
            if (identified[j] == find) {
                int* result = (int*)malloc(2 * sizeof(int));
                result[0] = j;
                result[1] = i;
                *returnSize = 2;
                return result;
            }
        }

        // Add current number and its index to the identified dictionary
        identified[i] = nums[i];
    }

    return NULL;  // No solution found
}

int main() {
    int nums[] = {2, 4, 3, 5};
    int target = 8;
    int returnSize;
    int* result = twoSum(nums, sizeof(nums) / sizeof(nums[0]), target, &returnSize);

    if (result != NULL) {
        printf("Indices: %d, %d\n", result[0], result[1]);
        free(result);
    } else {
        printf("No solution found.\n");
    }

    return 0;
}


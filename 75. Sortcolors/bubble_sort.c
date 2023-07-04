void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sortColors(int* nums, int numsSize) {
    // Base case: If there is only one element remaining, the array is already sorted
    if (numsSize == 1)
        return;

    // Perform a single pass of Bubble Sort
    for (int i = 0; i < numsSize - 1; i++) {
        // Compare adjacent elements and swap them if necessary
        if (nums[i] > nums[i + 1]) {
            swap(&nums[i], &nums[i + 1]);
        }
    }

    // Recursively call Bubble Sort on the remaining (numsSize-1) elements
    sortColors(nums, numsSize - 1);
}

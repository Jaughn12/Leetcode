#include <stdio.h>

int binarySearch(int nums[], int target, int start, int end) {
    if (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == target) {
            return mid;  // Found the target element
        } else if (nums[mid] < target) {
            // Target is in the right half of the remaining range
            return binarySearch(nums, target, mid + 1, end);
        } else {
            // Target is in the left half of the remaining range
            return binarySearch(nums, target, start, mid - 1);
        }
    }

    return -1;  // Target element is not found
}

int main() {
    int nums[] = {-1, 0, 3, 5, 9, 12};
    int target = 9;
    int size = sizeof(nums) / sizeof(nums[0]);
    int result = binarySearch(nums, target, 0, size - 1);

    printf("%d\n", result);  // Print the index of the target element

    return 0;
}

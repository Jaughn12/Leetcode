
int binarySearch(int* nums, int start, int end, int target) {
    // Base case: If the search range is invalid, return -1
    if (start > end)
        return -1;

    // Calculate the middle index
    int mid = start + (end - start) / 2;

    // If the middle element is the target, return its index
    if (nums[mid] == target)
        return mid;

    // If the middle element is less than the target, search the right half
    if (nums[mid] < target)
        return binarySearch(nums, mid + 1, end, target);

    // If the middle element is greater than the target, search the left half
    if (nums[mid] > target)
        return binarySearch(nums, start, mid - 1, target);
}

int search(int* nums, int numsSize, int target) {
    // Call the binarySearch helper function with initial parameters
    return binarySearch(nums, 0, numsSize - 1, target);
}


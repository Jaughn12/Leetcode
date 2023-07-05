#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int* nums, int size, int root) {
    int largest = root;
    int left = 2 * root + 1;
    int right = 2 * root + 2;

    if (left < size && nums[left] > nums[largest])
        largest = left;

    if (right < size && nums[right] > nums[largest])
        largest = right;

    if (largest != root) {
        swap(&nums[root], &nums[largest]);
        heapify(nums, size, largest);
    }
}

void heapSort(int* nums, int size) {
    // Build the heap (rearrange array)
    for (int i = size / 2 - 1; i >= 0; i--)
        heapify(nums, size, i);

    // Extract elements from the heap one by one
    for (int i = size - 1; i >= 0; i--) {
        swap(&nums[0], &nums[i]);
        heapify(nums, i, 0);
    }
}

int* sortArray(int* nums, int numsSize, int* returnSize) {
    // Make a copy of the original array
    int* sortedArray = (int*)malloc(numsSize * sizeof(int));
    for (int i = 0; i < numsSize; i++) {
        sortedArray[i] = nums[i];
    }

    // Sort the array using Heap Sort
    heapSort(sortedArray, numsSize);

    // Set the return size
    *returnSize = numsSize;

    return sortedArray;
}


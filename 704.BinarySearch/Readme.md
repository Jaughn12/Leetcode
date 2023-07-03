# Binary Search Algorithm

This repository contains implementations of the binary search algorithm in Python and C programming languages.

## Python Implementation

The Python implementation of the binary search algorithm can be found in the `binary_search.py` file. It takes a sorted list of numbers and a target value as input and returns the index of the target element in the list, or -1 if the target is not found.

### Usage

To use the Python binary search implementation, you can call the `binary_search` function and provide the input list and target value as arguments. For example:

```python
result = binary_search([-1, 0, 3, 5, 9, 12], 9)
print(result)  # Output: 4

## C Implementation

The C implementation of the binary search algorithm can be found in the `binary_search.c` file. It takes a sorted array of integers, the target value, the start index, and the end index of the search range as input. It returns the index of the target element in the array, or -1 if the target is not found.

### Usage

To use the C binary search implementation, you need to compile and run the code. For example:

```bash
gcc binary_search.c -o binary_search
./binary_search

## Time and Space Complexity

Both implementations of the binary search algorithm have the same time complexity. The time complexity is O(log n), where n is the number of elements in the input (list in Python, array in C). This makes the algorithm efficient for searching in sorted lists or arrays.

The space complexity of both implementations is O(1), indicating constant space usage. They don't require additional data structures or memory that scale with the input size.

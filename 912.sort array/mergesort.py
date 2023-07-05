class Solution(object):
    def sortArray(self, nums):
        """
        Sorts the input list of numbers using the merge sort algorithm.

        :param nums: The list of numbers to be sorted.
        :type nums: List[int]
        :return: The sorted list of numbers.
        :rtype: List[int]
        """
        if len(nums) <= 1:
            return nums

        # Divide the array into two halves
        mid = len(nums) // 2
        left_half = nums[:mid]
        right_half = nums[mid:]

        # Recursively sort the two halves
        sorted_left = self.sortArray(left_half)
        sorted_right = self.sortArray(right_half)

        # Merge the sorted halves
        return self.merge(sorted_left, sorted_right)

    def merge(self, left, right):
        """
        Merges two sorted lists into a single sorted list.

        :param left: The left half of the list.
        :type left: List[int]
        :param right: The right half of the list.
        :type right: List[int]
        :return: The merged sorted list.
        :rtype: List[int]
        """
        merged = []
        i = j = 0

        # Merge the two lists by comparing elements
        while i < len(left) and j < len(right):
            if left[i] <= right[j]:
                merged.append(left[i])
                i += 1
            else:
                merged.append(right[j])
                j += 1

        # Add the remaining elements from either list
        merged.extend(left[i:])
        merged.extend(right[j:])

        return merged


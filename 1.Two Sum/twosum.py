class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        identified = {}  # Dictionary to store identified numbers and their indices
        index = 0  # Current index

        for i in range(len(nums)):
            find = target - nums[index]  # Calculate the complement

            if find in identified:  # Check if complement is in the identified dictionary
                return [identified[find], index]  # Return indices of the complement and current number

            identified[nums[i]] = i  # Add current number and its index to the identified dictionary
            index += 1  # Increment the index to move to the next number


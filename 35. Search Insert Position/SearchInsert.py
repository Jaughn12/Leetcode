def searchInsert(nums: list, target: int) -> int:
    # Initialize the start and end indices of the search range
    start, end = 0, len(nums) - 1
    
    # Calculate the initial midpoint
    mid = (end) // 2

    # Perform binary search while the search range is valid
    while start <= end:
        # If the middle element is less than the target, adjust the start index and recalculate the midpoint
        if nums[mid] < target:
            start = mid + 1
            length = end - start
            mid = start + (length // 2)
        
        # If the middle element is greater than the target, adjust the end index and recalculate the midpoint
        elif nums[mid] > target:
            end = mid - 1
            length = end - start
            mid = start + (length // 2)
        
        # If the middle element is equal to the target, return the index
        else:
            return mid

    # If the target element is not found, return index where it should be
    return start

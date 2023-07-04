def sortColors(nums: list[int]):
    # Get the index of the last element in the list
    right_end_position = len(nums) - 1

    # Iterate over the sorted positions from 0 to the right end of the list
    for sorted_positions in range(right_end_position + 1):
        # Initialize swapped flag to False for each pass
        swapped = False

        # Iterate from the right end of the list down to the sorted positions
        for j in range(right_end_position, sorted_positions, -1):
            # Compare the current element with its previous element
            if nums[j] < nums[j - 1]:
                # Swap the elements if the current element is smaller
                nums[j], nums[j - 1] = nums[j - 1], nums[j]
                swapped = True

        # If no elements were swapped in the previous pass, the list is already sorted
        # Break out of the loop to avoid unnecessary iterations
        if not swapped:
            break
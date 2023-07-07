class Solution:
    def judgeSquareSum(self, c: int) -> bool:
        a = 0  # Initialize variable a to 0
        while a * a <= c:  # Loop until a^2 exceeds or equals c
            b = int((c - a * a) ** 0.5)  # Calculate the square root of (c - a^2) and convert it to an integer
            if b * b + a * a == c:  # Check if b^2 + a^2 equals c
                return True  # If a solution is found, return True
            a += 1  # Increment a by 1 for the next iteration
        return False  # If no solution is found, return False


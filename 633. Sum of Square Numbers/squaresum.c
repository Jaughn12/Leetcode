bool judgeSquareSum(int c){
    if (c < 0)
        return false;

    int a = 0; // Initialize a to 0
    int b = (int) sqrt(c); // Initialize b as square root of c

    while (a <= b) { // Loop until a exceeds b
        long long sumOfSquares = (long long) a * a + (long long) b * b;; // Calculate the sum of squares
        
        if (sumOfSquares == c)
            return true; // If the sum of squares is equal to c, return true
        else if (sumOfSquares < c)
            a++; // If the sum of squares is less than c, increment a
        else
            b--; // If the sum of squares is greater than c, decrement b
    }

    return false; // If no solution is found, return false
}


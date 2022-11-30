The Fibonacci Sequence is basically a series of numbers that starts at zero and increases steadily from there, with each number being equal to the sum of the two numbers before it. 

The fibonnaci sequence has two formulas: iterative method and recursive method. In an iterative method, a conditional loop is used to repeat the execution of the function; in a recursive method, the function calls itself.

# Iterative Method
int fibonacciIterative(int N){
    if (N ==0){
        return 0;
    } else if (N == 1){
        return 1;
    } else {
        int num1 = 0;
        int num2 = 1;
        int output;
        for (int i = 2; i <= N; i++){
            output = num1 + num2;
            num1 = num2;
            num2 = output;
        }
        return output;
    }
}

# Recurisve Method
int fibonacciRecursive(int N){
    if (N == 0){
        return 0;
    } else if (N == 1){
        return 1;
    } else {
        return fibonacciRecursive(N-1) + fibonacciRecursive(N-2);
    }
}

# Output
To find the output, run " make run "
10! = 55 = 55
F(1) = 1 = 1
F(2) = 1 = 1
F(3) = 2 = 2
F(4) = 3 = 3
F(5) = 5 = 5
F(6) = 8 = 8
F(7) = 13 = 13
F(8) = 21 = 21
F(9) = 34 = 34
F(10) = 55 = 55

# Time Complexity
run ./main_b_time_recursive and ./main_b_time_iterative to find the time complexity of each methods

# Conclusion
Based on the time complexity, using the recrusive method is much faster than the iterative method
   

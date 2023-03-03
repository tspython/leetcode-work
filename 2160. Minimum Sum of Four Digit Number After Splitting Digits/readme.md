Runtime
0 ms

Beats
100%

Explanation

The given code takes a positive integer "num" consisting of exactly four digits as input. It splits the digits of "num" into two new integers "new1" and "new2" by using all the digits found in "num".

To do this, the code first initializes an array "d" of size 4 and sets all its elements to zero. It then stores each digit of "num" in the array "d" using a loop and modulo operator. The loop runs for four iterations, and in each iteration, it divides "num" by 10 and stores the remainder (which is a digit of "num") in the corresponding element of the array "d".

Next, the code sorts the array "d" in ascending order using the built-in sort function.

Finally, the code calculates the minimum possible sum of "new1" and "new2" using the formula:

10 * (d[0] + d[1]) + d[2] + d[3]

This formula gives us the minimum possible sum because it ensures that the two numbers "new1" and "new2" have the smallest possible values. Specifically, it concatenates the two smallest digits in "num" to form the tens and units digits of "new1", and concatenates the two largest digits in "num" to form the tens and units digits of "new2".

For example, if "num" is 2932, then the digits in "num" are 2, 9, 3, and 2. After sorting them in ascending order, we get d = {2, 2, 3, 9}. The code then calculates the minimum possible sum of "new1" and "new2" as 22 + 39 = 61.

Therefore, the code returns 61 as the minimum possible sum of "new1" and "new2" for any given four-digit number "num".

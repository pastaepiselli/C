// 3754. Concatenate Non-Zero Digits and Multiply by Sum I
/*
You are given an integer n.
Form a new integer x by concatenating all the non-zero digits of n in their original order. If there are no non-zero digits, x = 0.
Let sum be the sum of digits in x.
Return an integer representing the value of x * sum.
 */
long long sumAndMultiply(int n) {
    long long sum = 0;
    long len = 1;
    long newNum = 0;
    long d;
    while (n > 0)
    {
        d = n % 10;
        sum += d;
        if (d != 0){
            newNum += d * len;
            len *= 10;   
        }
        n /= 10; 
    }

    return newNum * sum;
}

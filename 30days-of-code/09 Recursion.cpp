// https://www.hackerrank.com/challenges/30-recursion
int factorial(int n) {
    if (n > 1) {
        n = n * factorial(n-1);
    }
    return n;
}
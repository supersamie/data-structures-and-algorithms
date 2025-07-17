/**
 * @author Samantha Gomez
 * @date 06JUL2025
 *
 * @brief Find the last digit of the sum of Fibonacci numbers.
 */

#include <iostream>

using namespace std;

int fibonacci_sum_naive(long long n)
{
    if (n <= 1)
        return n;

    long long previous = 0;
    long long current = 1;
    long long sum = 1;

    for (long long i = 0; i < n - 1; ++i) {
        long long tmp_previous = previous;
        previous = current;
        current = tmp_previous + current;
        sum += current;
    }

    return sum % 10;
}

int find_last_digit_sum(long long len)
{
    len = len % 60;
    int a = 0, b = 1;

    for (long long i = 0; i < len + 2; ++i) {
        int next = (a + b) % 10;
        a = b;
        b = next;
    }
    if (a == 0) {
        /* Simplifyling (0 - 1) + 10 */
        return 9;
    }
    return (a - 1);
}

int main()
{
    long long n = 0;
    std::cin >> n;
    std::cout << find_last_digit_sum(n);
}

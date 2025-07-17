/**
 * @author Samantha Gomez
 * @date 06JUL2025
 *
 * @brief Find the last digit of the sum of squares of fibonacci
 */

#include <iostream>

using namespace std;

int fibonacci_sum_squares_naive(long long n)
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
        sum += current * current;
    }

    return sum % 10;
}

int find_last_digit(long long len)
{
    len = len % 60;

    int a = 0, b = 1;

    for (long long i = 0; i < len; ++i) {
        int next = (a + b) % 10;
        a = b;
        b = next;
    }
    return a;
}

int find_last_dig_sum_of_sq_fib(long long len)
{
    int f_n = find_last_digit(len);
    int f_n_plus_one = find_last_digit(len + 1);

    int result = (f_n * f_n_plus_one) % 10;

    return result;
}

int main()
{
    long long n = 0;
    std::cin >> n;
    std::cout << find_last_dig_sum_of_sq_fib(n);
}

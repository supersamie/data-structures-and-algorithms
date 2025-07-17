/**
 * @author Samantha Gomez
 * @date 06JUL2025
 *
 * @brief Derive the Fibonacci sequence.
 */

#include <iostream>

using namespace std;

// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
//
//             fib(4)
//            /      \
//       fib(3)      fib(2)
//       /    \       /    \
//   fib(2)  fib(1) fib(1) fib(0)
//   /    \
// fib(1) fib(0)

long long fibonacci_sequence(long long len)
{
    long long a = 0, b = 1;

    for (long long i = 0; i < len; ++i) {
        // cout << a << " ";
        long long next = a + b;
        a = b;
        b = next;
    }
    // cout << endl;
    return a;
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

int find_huge_fib(long long len, long long m)
{
    int a = 0, b = 1;

    for (long long i = 0; i < len; ++i) {
        int next = (a + b) % m;
        a = b;
        b = next;
    }
    return a;
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

int find_last_digit_part_sum(long long m, long long n)
{

    int two_past_n = find_last_digit(n + 2);
    int one_past_m = find_last_digit(m + 1);

    int result = two_past_n - one_past_m;
    if (result < 0) {
        result += 10;
    }

    return result;
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

    /*
     * Find Fibonacci Sequence, print last number in sequence.
     */
    // long long len;
    // cin >> len;
    // cout << fibonacci_sequence(len) << endl;

    /*
     * Find the last digit in the F(n)th number
     */
    // long long len;
    // cin >> len;
    // cout << find_last_digit(len) << endl;

    /*
     * Find the nth Fibonacci number modulo m
     */
    long long len;
    cin >> len;
    long long m = 0;
    cin >> m; /* The modulo m */
    cout << find_huge_fib(len, m) << endl;

    /*
     * Find last digit of sum of fib numbers
     */
    // long long len;
    // cin >> len;
    // cout << find_last_digit_sum(len) << endl;

    /*
     * Find last digit of partial sum of fib m <= n
     */
    // long long m,n = 0;
    // cin >> m; /* lower bound */
    // cin >> n; /* upper bound */
    // cout << find_last_digit_part_sum(m, n) << endl;

    /*
     * Find the last digit of the sum of squares of fibonacci
     */
    // long long len;
    // cin >> len;
    // cout << find_last_dig_sum_of_sq_fib(len) << endl;

    return 0;
}

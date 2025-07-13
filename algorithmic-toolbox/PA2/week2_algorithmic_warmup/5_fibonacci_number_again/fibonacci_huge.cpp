/**
 * @author Samantha Gomez
 * @date 06JUL2025
 *
 * @brief Find the nth Fibonacci number modulo m
 */

#include <iostream>

using namespace std;

long long get_fibonacci_huge_naive(long long n, long long m) {
  if (n <= 1)
    return n;

  long long previous = 0;
  long long current = 1;

  for (long long i = 0; i < n - 1; ++i) {
    long long tmp_previous = previous;
    previous = current;
    current = tmp_previous + current;
  }

  return current % m;
}

/**
 * Calculate the pisano period to reduce the iteration length.
 *
 * @param m The modulo.
 */
long long pisano_period(long long m) {
  long long a = 0, b = 1, c;
  for (long long i = 0; i < m * m; ++i) {
    c = (a + b) % m;
    a = b;
    b = c;
    if (a == 0 && b == 1)
      return i + 1;
  }
  return m;
}

/**
 * Find the last digit of a large fib number
 *
 * @param len How far in the sequence we want to go 'n'
 * @param m   What we are moding with
 */
int find_huge_fib(long long len, long long m) {
  int a = 0, b = 1;

  for (long long i = 0; i < len; ++i) {
    int next = (a + b) % m;
    a = b;
    b = next;
  }
  return a;
}

int main() {
  long long n, m;
  std::cin >> n >> m;
  n = n % pisano_period(m);
  std::cout << find_huge_fib(n, m) << '\n';
}

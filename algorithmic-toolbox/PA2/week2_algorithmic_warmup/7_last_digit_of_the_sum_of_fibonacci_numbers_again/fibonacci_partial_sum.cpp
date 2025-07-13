/**
 * @author Samantha Gomez
 * @date 06JUL2025
 *
 * @brief Find last digit of partial sum of fib m <= n
 */

#include <iostream>

using namespace std;

long long get_fibonacci_partial_sum_naive(long long from, long long to) {
  long long sum = 0;

  long long current = 0;
  long long next = 1;

  for (long long i = 0; i <= to; ++i) {
    if (i >= from) {
      sum += current;
    }

    long long new_current = next;
    next = next + current;
    current = new_current;
  }

  return sum % 10;
}

int find_last_digit(long long len) {
  len = len % 60;

  int a = 0, b = 1;

  for (long long i = 0; i < len; ++i) {
    int next = (a + b) % 10;
    a = b;
    b = next;
  }
  return a;
}

int find_last_digit_part_sum(long long m, long long n) {

  int two_past_n = find_last_digit(n + 2);
  int one_past_m = find_last_digit(m + 1);

  int result = two_past_n - one_past_m;
  if (result < 0) {
    result += 10;
  }

  return result;
}

int main() {
  long long from, to;
  std::cin >> from >> to;
  std::cout << find_last_digit_part_sum(from, to) << '\n';
}

/**
 * @author Samantha Gomez
 * @date 06JUL2025
 *
 * @brief  Find the last digit in the F(n)th number
 */

#include <iostream>

using namespace std;

int get_fibonacci_last_digit_naive(int n) {
  if (n <= 1)
    return n;

  int previous = 0;
  int current = 1;

  for (int i = 0; i < n - 1; ++i) {
    int tmp_previous = previous;
    previous = current;
    current = tmp_previous + current;
  }

  return current % 10;
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

int main() {
  int n;
  std::cin >> n;
  int c = find_last_digit(n);
  std::cout << c << '\n';
}

/**
 * @Author Samantha Gomez
 * @date 12JUL2025
 *
 * @brief Find the greatest common denominator of two integers.
 */

#include <cmath>
#include <iostream>

using namespace std;

int gcd_naive(int a, int b) {
  int current_gcd = 1;
  for (int d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

/**
 * Using Euclidean Algorithm
 *
 * Let a' be the remainder when a is divided by b
 * GCD(a,b) = GCD(a',b) = GCD(b,a')
 */
long long get_gcd(long long a, long long b) {

  if (b > a) {
    long long tmp = a;
    a = b;
    b = tmp;
  }

  if (b == 0) {
    return a;
  }
  long long new_a = b;
  return get_gcd(b, a % b);
}

int main() {
  long long a, b = 0;
  std::cin >> a >> b;

  std::cout << get_gcd(a, b) << std::endl;
  return 0;
}

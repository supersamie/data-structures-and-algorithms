/**
 * @author Samantha Gomez
 * @date 12JUL2025
 *
 * @brief Find the least common multiple of two integers.
 */

#include <cmath>
#include <iostream>

using namespace std;

long long lcm_naive(int a, int b) {
  for (long l = 1; l <= (long long)a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long)a * b;
}

/**
 * Using Euclidean Algorithm
 *
 * Let a' be the remainder when a is divided by b
 * GCD(a,b) = GCD(a',b) = GCD(b,a')
 */
long long get_gcd(long long a, long long b) {
  if (b == 0) {
    return a;
  }
  long long new_a = b;
  return get_gcd(b, a % b);
}

/**
 * The least common mutiple is the product of both numbers divided by their
 * greatest common denominator.
 */
long long get_lcm(long long a, long long b) { return (a * b) / get_gcd(a, b); }

int main() {
  long long a, b = 0;
  std::cin >> a >> b;
  std::cout << get_lcm(a, b) << std::endl;
  return 0;
}

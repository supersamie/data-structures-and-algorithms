/**
 * @author Samantha Gomez
 * @date 12JUL2025
 *
 * @brief Find the greatest common denominator of two integers.
 */

#include <cmath>
#include <iostream>

using namespace std;

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

int main() {
  long long a, b = 0;
  cin >> a;
  cin >> b;

  if (b > a) {
    long long tmp = a;
    a = b;
    b = tmp;
  }

  long long gcd = get_gcd(a, b);
  cout << gcd << endl;

  return 0;
}

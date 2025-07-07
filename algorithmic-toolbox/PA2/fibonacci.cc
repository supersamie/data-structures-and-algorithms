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

void fibonacci_sequence(double n) {
  double a = 0, b = 1;
  for (double i = 0; i < n; ++i) {
    cout << a << " ";
    double next = a + b;
    a = b;
    b = next;
  }
  cout << endl;
}

int main() {
  double len = 0;
  /*
   * Get times to recurse.
   */
  cin >> len;

  fibonacci_sequence(len);

  return 0;
}

/**
 * @author Samantha Gomez
 * @date 06JUL2025
 *
 * @brief Simple program that adds two digits.
 */

#include <iostream>

int main() {
  int dig_0, dig_1, dig_tot;

  /*
   * The Grader didn't support my cout prompts.
   */
  // std::cout << "Enter first digit: ";
  std::cin >> dig_0;
  // std::cout << "Enter second digit: ";
  std::cin >> dig_1;

  dig_tot = dig_0 + dig_1;
  std::cout << dig_tot;

  return 0;
}

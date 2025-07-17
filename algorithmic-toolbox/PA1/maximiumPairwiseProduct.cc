/**
 * @author Samantha Gomez
 * @date 06JUL2025
 *
 * @brief Find the maximum pairwise product in a given list.
 */

#include <iostream>

int main()
{
    int len = 0;
    long long first_max = 0, second_max = 0;

    std::cin >> len;

    for (int i = 0; i < len; i++) {
        long long input;
        bool is_stored = false;
        std::cin >> input;
        if (input > first_max) {
            is_stored = true;
            second_max = first_max;
            first_max = input;
        }
        if (!is_stored && input > second_max) {
            second_max = input;
        }
    }

    std::cout << first_max * second_max;

    return 0;
}

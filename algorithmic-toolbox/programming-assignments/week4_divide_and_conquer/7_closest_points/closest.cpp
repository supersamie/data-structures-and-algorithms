#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using std::min;
using std::pair;
using std::string;
using std::vector;

double minimal_distance(vector<int> x, vector<int> y)
{
    // write your code here
    return 0.;
}

int main()
{
    size_t n;
    std::cin >> n;
    vector<int> x(n);
    vector<int> y(n);
    for (size_t i = 0; i < n; i++) {
        std::cin >> x[i] >> y[i];
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(9) << minimal_distance(x, y) << "\n";
}

#include <iostream>
using namespace std;

/**
 * Calculates the sum of two numbers over a given number of iterations.
 *
 * @param[in] num1 First number to add.
 * @param[in] num2 Second number to add.
 * @param[in] iteration Number of times to add the two numbers.
 * @return Sum of the two numbers over the given number of iterations.
 */
int lovesum(const int num1, const int num2, const int iteration) {
    int sum = 0;

    for (int i = 0; i < iteration; i++) {
        sum += num1 + num2;
    }
    return sum;
}

/**
 * Main entry point for the program.  Calculates the sum of two numbers (1 and
 * 2) over 1000 iterations and prints the result to the console in the form
 * "I LOVE YOU <sum>".
 *
 * @return 0 on success.
 */
int main() {
    constexpr int num1 = 1;
    constexpr int num2 = 2;
    constexpr int iteration = 1000;
    const int sum = lovesum(num1, num2, iteration);

    cout << "I LOVE YOU " << sum << '!' << endl;
}

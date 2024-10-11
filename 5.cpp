#include <iostream>
#include <valarray>
using namespace std;

/**
 * Prints out the first perfect square greater than or equal to 100,000 to
 * standard output.
 *
 * A perfect square is a number that is the square of an integer. For example,
 * 16 is a perfect square since it is 4^2.
 *
 * The program iterates over the range [100000, 200000], checks if each number is
 * a perfect square, and prints out the first perfect square it finds.
 */
int main() {
    for (int i = 100000; i <= 200000; i++) {
        if (i % 2 == 0) {
            int k = sqrt(i);
            if (k * k == i) {
                cout << i << endl;
                break;
            }
        }
    }
}

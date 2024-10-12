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
// int main() {
//     for (int i = 100000; i <= 200000; i++) {
//         if (i % 2 == 0) {
//             int k = sqrt(i);
//             if (k * k == i) {
//                 cout << i << endl;
//                 break;
//             }
//         }
//     }
// }

// int main() {
//     int n = 47;
//     while (true) {
//         if (n == 0) {
//             break;
//         }
//         cout << "*";
//         n = n / 10;
//     }
// }

// int main() {
//     int N = 10;
//
//     for (int i = 1; i <= N; i++) {
//         // cetak i buah "*"
//         for (
//             int j = 1;
//             j <= i;
//             j++
//         ) {
//             cout << "*";
//         }
//
//         // sisanya, cetak "."
//         for (
//             int k = 1;
//             k <= (N - i);
//             k++
//         ) {
//             cout << ".";
//         }
//
//         cout << endl;
//     }
// }

// int main() {
// 	int N = 10;
//
// 	for (int i = 1; i <= N; i++) {
// 		if (i == 1 || i == N) {
// 			for (int j = 1; j <= N; j++) {
// 				cout << "*";
// 			}
// 		} else {
// 			for (int j = 1; j <= N; j++) {
// 				if (j == 1 || j == N) {
// 					cout << "*";
// 				} else {
// 					cout << ".";
// 				}
// 			}
// 		}
// 		cout << endl;
// 	}
// }

// int main() {
// 	int N = 10;
//
// 	for (int i = 1; i <= N; i++) {
// 		for (int j = 1; j <= N; j++) {
// 			if (j == i || j == N + 1 - i) {
// 				cout << "*";
// 			} else {
// 				cout << ".";
// 			}
// 		}
//
// 		cout << endl;
// 	}
// }

// int main() {
// 	int i = 0;
// 	while (i < 10) {
// 		if (i % 2 == 0) {
// 			continue;
// 		}
// 		cout << "*";
// 		i++;
// 	}
// }


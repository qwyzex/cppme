#include <iostream>
using namespace std;

// int main() {
// 	int kandang[5] = {225 * 335, 215 * 394, 198 * 400, 314 * 298, 299 * 278};
//
// 	int sum = 0;
//
// 	for (int i = 0; i < 5; i++) {
// 		if (kandang[i] > 80000) {
// 			sum++;
// 		}
// 	}
//
// 	cout << sum << endl;
// }

// int main() {
// 	int luas[5];
//
// 	luas[0] = 225 * 335;
// 	luas[1] = 215 * 394;
// 	luas[2] = 198 * 400;
// 	luas[3] = 314 * 298;
// 	luas[4] = 299 * 278;
//
// 	int hasil = 0;
//
// 	for (int i = 0; i < 5; i++) {
// 		if (luas[i] > 80000) {
// 			hasil++;
// 		}
// 	}
//
// 	cout << hasil << endl;
// }

// int main() {
//	int list[5] = {225 * 335, 215 * 394, 198 * 400, 314 * 298, 299 * 278};
//
//	int largest = 0;
//
//	for (const int i : list) {
//		if (i > largest) {
//			largest = i;
//		}
//	}
//
//	cout << largest << endl;
// }

// int main() {
// 	int beli[10] = {13, 100, 0, 4, 31, 0, 178, 23, 1, 13};
// 	int jual[10] = {0, 2, 24, 0, 10, 4, 0, 121, 0, 15};
//
// 	int total = 0;
//
// 	for (int i = 0; i < 10; i++) {
// 		total += beli[i] - jual[i];
// 		cout << total <<endl;
// 	}
// }

/**
 * @brief Main entry point of the program.
 *
 * @details This program uses a boolean array of size 100 to simulate 100
 *          lamps. The program then iterates over the lamps 10 times, each
 *          iteration toggling all lamps whose index is a multiple of the
 *          iteration number. Finally, the program counts the number of lamps
 *          which are on at the end and prints this number to the console.
 *
 * @returns 0 on success.
 */
// int main() {
// 	bool lampu[100] = { false };
//
// 	int total_hidup = 0;
//
// 	for (int i = 1; i <= 10; i++) {
// 		for (int j = 0; j < 100; j++) {
// 			if ((j + 1) % i == 0) {
// 				lampu[j] = !lampu[j];
// 			}
// 		}
// 	}
//
// 	for (int i = 0; i < 100; i++) {
// 		if (lampu[i]) {
// 			total_hidup++;
// 		}
// 	}
//
// 	cout << total_hidup << endl;
// }

// int main() {
// 	int luas[4][3] = {{225 * 335, 299 * 278, 300 * 250},
// 					  {215 * 394, 144 * 718, 300 * 290},
// 					  {200 * 400, 240 * 333, 142 * 619},
//
// 	int valid = 0;
//
// 	for (int i = 0; i < 4; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			if (luas[i][j] >= 80000) {
// 				valid++;
// 			}
// 		}
// 	}
//
// 	cout << valid;
// }

// int main() {
// 	int luas[4][3] = {{225 * 335, 299 * 278, 300 * 250},
// 					  {215 * 394, 144 * 718, 300 * 290},
// 					  {200 * 400, 240 * 333, 142 * 619},
// 					  {314 * 298, 411 * 198, 333 * 222}};
//
// 	int total_revenue[3] = {0, 0, 0};
//
// 	for (int i = 0; i < 4; i++) {
// 		for (int j = 0; j < 3; j++) {
// 			total_revenue[j] +=
// 				j == 0 ? luas[i][j] * 100
// 				: j == 1 ? luas[i][j] * 120
// 				: luas[i][j] * 150;
// 		}
// 	}
//
// 	cout << total_revenue[0] << endl;
// 	cout << total_revenue[1] << endl;
// 	cout << total_revenue[2] << endl;
// }

int main() {
	int data[10] = {1, 1, 3, 4, 3, 3, 3, 9, 1, 9};
	int hasil = 0;
	for (int i = 0; i < 9; i++) {
		if (data[i] == data[i+1]) {
			hasil++;
		}
	}
	cout << hasil << endl;
}
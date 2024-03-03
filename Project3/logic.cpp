#include <iostream>

using namespace std;

#define size 100


bool identity_matrix(int matrix[size][size], int entered_size) {
	if (entered_size <= 0 || entered_size > size) {
		return false;
	}

	for (int i = 1; i < entered_size; i++) {
		for (int j = 0; j < i; j++) {
			if (matrix[i][j] != 0) {
				return false;
			}
		}
	}

	for (int k = 0; k < entered_size - 1; k++) {
		for (int l = k + 1; l < entered_size; l++) {
			if (matrix[k][l] != 0) {
				return false;
			}
		}
	}

	for (int h = 0; h < entered_size; h++) {
		if (matrix[h][h] != 1) {
			cout << h << endl;
			return false;
		}
	}

	return true;
}
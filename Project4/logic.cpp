#include <iostream>

using namespace std;

#define size 100


bool diagonal_matrix(int matrix[size][size], int entered_size) {
	if (entered_size <= 0 || entered_size > size) {
		return false;
	}

	for (int i = 0; i < entered_size - 1; i++) {
		for (int j = 0; j < entered_size - i - 1; j++) {
			if (matrix[i][j] != 0) {
				return false;
			}
		}
	}

	for (int k = 1; k < entered_size; k++) {
		for (int l = entered_size - k; l < entered_size; l++) {
			if (matrix[k][l] != 0) {
				return false;
			}
		}
	}

	return true;
}

bool identity_matrix(int matrix[size][size], int entered_size) {

	bool result = diagonal_matrix(matrix, entered_size);

	for (int h = 0; h < entered_size; h++) {
		for (int l = 0; l < entered_size; l++) {
			if (h + l == entered_size - 1) {
				if (matrix[h][l] != 1) {
					return false;
				}
			}
		}
	}

	return result;
}
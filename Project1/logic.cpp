#include <iostream>

using namespace std;

#define size 100


bool null_matrix(int matrix[size][size], int horizontal, int vertical) {
	if (vertical <= 0 || horizontal <= 0 || vertical > size || horizontal > size) {
		return false;
	}

	for (int i = 0; i < vertical; i++) {
		for (int j = 0; j < horizontal; j++) {
			if (matrix[i][j] != 0) {
				return false;
			}
		}
	}

	return true;
}
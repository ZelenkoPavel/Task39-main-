#include <iostream>

using namespace std;

#define horizontal 100
#define vertical 100

bool null_matrix(int matrix[vertical][horizontal], int size) {
	if (size <= 0) {
		return false;
	}

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (matrix[i][j] != 0) {
				return false;
			}
		}
	}

	return true;
}
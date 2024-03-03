#include <iostream>

using namespace std;

#define horizontal 100
#define vertical 100


void random_init_matrix(int matrix[vertical][horizontal], int max, int min, int size);
string convert_matrix_to_string(int matrix[vertical][horizontal], int size);

bool null_matrix(int matrix[vertical][horizontal], int size);

int main() {

	int max, min;
	int matrix[vertical][horizontal];
	int size;

	do {
		system("cls");
		cout << "Input size of matrix, min and max number of matrix: ";
		cin >> size >> min >> max;
	} while (size <= 0);

	random_init_matrix(matrix, max, min, size);

	cout << convert_matrix_to_string(matrix, size) << endl;

	string result = null_matrix(matrix, size) ? "Yes, there is null matrix" : "No, there isn't null matrix";

	cout << "Result - " << result << endl;

	return 0;
}
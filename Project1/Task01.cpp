#include <iostream>

using namespace std;

#define size 100


void random_init_matrix(int matrix[size][size], int max, int min, int horizontal, int vertical);
string convert_matrix_to_string(int matrix[size][size], int horizontal, int vertical);

bool null_matrix(int matrix[size][size], int horizontal, int vertical);

int main() {

	int max, min;
	int matrix[size][size];
	int horizontal, vertical;

	do {
		system("cls");
		cout << "Input size of matrix, min and max number of matrix: ";
		cin >> horizontal >> vertical >> min >> max;
	} while (size <= 0);

	random_init_matrix(matrix, max, min, horizontal, vertical);

	cout << convert_matrix_to_string(matrix, horizontal, vertical) << endl;

	string result = null_matrix(matrix, horizontal, vertical) 
		? "Yes, there is null matrix" : "No, there isn't null matrix";

	cout << "Result - " << result << endl;

	return 0;
}
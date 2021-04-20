#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void output () {
	string filename;
	int matrix[3][3];
	cout << "Введите имя файла" << endl;
	cin >> filename;
	ifstream matrixin(filename);
	cout << "Матрица:" << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			string temp1;
			matrixin >> temp1;
			int temp2 = stoi(temp1);
			matrix[i][j] = temp2;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << matrix[i][j] << "\t";
		}
		cout << endl;
	}
}
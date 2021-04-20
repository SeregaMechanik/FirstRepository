#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void input () {
	string filename;
	cout << "¬ведите им€ файла" << endl;
	cin >> filename;
	ofstream matrixin(filename);
    int matrix[3][3];
    cout << "¬ведите матрицу 3*3" << endl;
    for (int i = 0; i < 3; i++) {
	    for (int j = 0; j < 3; j++) {
		cin >> matrix[i][j];
	    }
    }
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			matrixin << matrix[i][j] << "\t";
		}
		matrixin << "\n";
	}
	matrixin.close();
}
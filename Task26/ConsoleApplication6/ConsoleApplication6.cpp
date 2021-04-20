#include <iostream>
#include <fstream>
#include <string>
#include "IN.h"
#include "OUT.h"
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	bool a = true;
	while (a) {

		cout << "Введите номер операции: " << endl;
		cout << "1. Загрузить матрицу в файл" << endl;
		cout << "2. Загрузить матрицу из файла" << endl;
		cout << "3. Очистить файл" << endl;
		int b;
		cin >> b;
		if (b == 1) {
			input();
			cout << "Вы хотите продолжить?" << endl << "1 - да" << endl << "0 - нет" << endl;
			int f; cin >> f;
			if (f == 1) { a = true; }
			else { a = false; }
		}
		if (b == 2) {
			output();
			cout << "Вы хотите продолжить?" << endl << "1 - да" << endl << "0 - нет" << endl;
			int f; cin >> f;
			if (f == 1) { a = true; }
			else { a = false; }
		}
		if (b == 3) {
			ofstream clear;
			string filename;
			cout << "Введите имя файла" << endl;
			cin >> filename;
			clear.open(filename, ::ofstream::out | ::ofstream::trunc);
			clear.close();
			cout << "Вы хотите продолжить?" << endl << "1 - да" << endl << "0 - нет" << endl;
			int f; cin >> f;
			if (f == 1) { a = true; }
			else { a = false; }
		}
	}
}


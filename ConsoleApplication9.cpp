#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
 
using namespace std;

int check(vector <vector <char>> a) {
	// проверить правильность записи на доске 
	if (a[1][1] == 'x' && a[2][2] == 'x' && a[3][3] == 'x' || a[1][3] == 'x' && a[2][2] == 'x' && a[3][1] == 'x' || a[1][1] == 'x' && a[1][2] == 'x' && a[1][3] == 'x' || a[2][1] == 'x' && a[2][2] == 'x' && a[2][3] == 'x' || a[3][1] == 'x' && a[3][2] == 'x' && a[3][3] == 'x' || a[1][1] == 'x' && a[2][1] == 'x' && a[3][1] == 'x' || a[1][2] == 'x' && a[2][2] == 'x' && a[3][2] == 'x' || a[1][3] == 'x' && a[2][3] == 'x' && a[3][3] == 'x') {
		return 1;
	}
	else if (a[1][1] == 'o' && a[2][2] == 'o' && a[3][3] == 'o' || a[1][3] == 'o' && a[2][2] == 'o' && a[3][1] == 'o' || a[1][1] == 'o' && a[1][2] == 'o' && a[1][3] == 'o' || a[2][1] == 'o' && a[2][2] == 'o' && a[2][3] == 'o' || a[3][1] == 'o' && a[3][2] == 'o' && a[3][3] == 'o' || a[1][1] == 'o' && a[2][1] == 'o' && a[3][1] == 'o' || a[1][2] == 'o' && a[2][2] == 'o' && a[3][2] == 'o' || a[1][3] == 'o' && a[2][3] == 'o' && a[3][3] == 'o') {
		return 2;
	}
	int cht = 0;
	for (int i = 1; i <=  3; ++i) {
		for (int j = 1; j <= 3; ++j) {
			if (a[i][j] != '.') {
				cht++;
			}
			if (cht==9) {
				return 3;
			}
		}
	}
		return 0;
}
/*int otr(vector <vector <char>> a) {
	cout << string(100, ' ');
	cout << "_______";
	cout << "|" << a[0][0] << "|" << a[0][1] << "|" << a[0][2] << "|";
	cout << "_______";
	cout << "|" << a[1][0] << "|" << a[1][1] << "|" << a[1][2] << "|";
	cout << "_______";
	cout << "|" << a[2][0] << "|" << a[2][1] << "|" << a[2][2] << "|";
	cout << "_______";
}*/
// создать функцию отрисовки с обн экрана 
// цикл (бесконечный) вводить 2 координаты и в зависимости от четности ходо ставить туда крестик или нолик , сделать проверку коректности хода 
// на каждом этапе заного отрисовываьть 
int main() {
	vector <vector <char>> a (4);
	for (int i = 1; i <= 3; ++i) {
		for (int j = 1; j <= 4; ++j) {
			char s = '.';
			a[i].push_back(s);
		}
	}
	bool flag = 1;
	while (true) {
		int z, y;
		cin >> z >> y;
		if (z <= 3 && z > 0 && y <= 3 && y > 0) {
			char k;
			if (flag == 1) {
				cout << "shas krestiky";
			}
			else if (flag == 0) {
				cout << "shas noliky";
			}
			cin >> k;
			if (flag == 1 && k == 'o') {
				continue;
			}
			else if (flag == 0 && k == 'x') {
				continue;
			}
			if (k == 'x' && a[z][y] == '.') {
				a[z][y] = 'x';
				flag = 0;
			}
			else if (k == 'o' && a[z][y] == '.') {
				a[z][y] = 'o';
				flag = 1;
			}
			else {
				continue;
			}
		}
		int m = 100;
		while (m--) {
			cout << endl;
		}
		
		cout << "_______\n";
		cout << "|" << a[1][1] << "|" << a[1][2] << "|" << a[1][3] << "|\n";
		cout << "_______\n";
		cout << "|" << a[2][1] << "|" << a[2][2] << "|" << a[2][3] << "|\n";
		cout << "_______\n";
		cout << "|" << a[3][1] << "|" << a[3][2] << "|" << a[3][3] << "|\n";
		cout << "_______\n";

		int l = check(a);
		if (l == 1) {
			cout << "kresty viigraly";
			return 0;
		}
		else if (l == 2) {
			cout << "nyly viigraly";
			return 0;
		}
		else if (l == 3) {
			cout << "nycha";
			return 0;
		}
		else {
			continue;
		}
	}
 	
}
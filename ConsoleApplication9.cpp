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
int main() {
	int chtx = 0;
	int chto = 0;
	while (true) {
		vector <vector <char>> a(4);
		int uq = -3;
		for (int i = 1; i <= 3; ++i) {
			for (int j = 1; j <= 4; ++j) {
				char s = uq;
				a[i].push_back(s);
				uq++;
			}
		}
		bool flag = 1;
		while (true) {
			if (flag == 1) {
				cout << "shas krestiky";
			}
			else if (flag == 0) {
				cout << "shas noliky";
			}
			cout << endl;
			int z, y;
			cin >> z >> y;
			if (z <= 3 && z > 0 && y <= 3 && y > 0) {
				if (flag == 1 && a[z][y] == '.') {
					a[z][y] = 'x';
					flag = 0;
				}
				else if (flag == 0 && a[z][y] == '.') {
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
			int m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "_______\n";
			m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "|" << a[1][1] << "|" << a[1][2] << "|" << a[1][3] << "|\n";
			m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "_______\n";
			m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "|" << a[2][1] << "|" << a[2][2] << "|" << a[2][3] << "|\n";
			m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "_______\n";
			m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "|" << a[3][1] << "|" << a[3][2] << "|" << a[3][3] << "|\n";
			m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "_______\n";

			int m1 = 5;
			while (m1--) {
				cout << endl;
			}
			int m5 = 5;
			while (m5--) {
				cout << endl;
			}
			int l = check(a);
			if (l == 1) {
				cout << "kresty viigraly";
				chtx++;
				cout << endl << "shet o = " << chto << " shet x = " << chtx;
				int m4 = 70;
				while (m4--) {
					cout << endl;
				}
				break;
			}
			else if (l == 2) {
				cout << "nyly viigraly";
				chto++;
				cout << endl << "shet o = " << chto << " shet x = " << chtx;
				int m4 = 70;
				while (m4--) {
					cout << endl;
				}
				break;
			}
			else if (l == 3) {
				cout << "nycha";
				cout << endl << "shet o = " << chto << " shet x = " << chtx;
				int m4 = 70;
				while (m4--) {
					cout << endl;
				}
				break;
			}
			else {
				continue;
			}
		}
		cout << "zakonchit igru?\n";
		cout << "da ili net";
		int q7 = 15;
		while (q7--) {
			cout << endl;
		}
		string kq;
		cin >> kq;
		int q = 15;
		while (q--) {
			cout << endl;
		}
		if (kq == "da") {
			int q1 = 30;
			while (q1--) {
				cout << ' ';
			}
			cout << endl << "shet o = " << chto << " shet x = " << chtx;
			int q = 15;
			while (q--) {
				cout << endl;
			}
			return 0;
		}
		else if (kq == "net") {
			continue;
		}
		else {
			int q1 = 60;
			while (q1--) {
				cout << ' ';
			}
			cout << endl << "shet o = " << chto << " shet x = " << chtx;
			int q = 30;
			while (q--) {
				cout << endl;
			}
			return 0;
		}
	}
}

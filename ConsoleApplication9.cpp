#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
 
using namespace std;

int check(vector <vector <char>> a) {
	// проверить правильность записи на доске 
	if (a[0][0] == 'x' && a[1][1] == 'x' && a[2][2] == 'x' || a[0][2] == 'x' && a[1][1] == 'x' && a[2][0] == 'x' || a[0][0] == 'x' && a[0][1] == 'x' && a[0][2] == 'x' || a[1][0] == 'x' && a[1][1] == 'x' && a[1][2] == 'x' || a[2][0] == 'x' && a[2][1] == 'x' && a[2][2] == 'x' || a[0][0] == 'x' && a[1][0] == 'x' && a[2][0] == 'x' || a[0][1] == 'x' && a[1][1] == 'x' && a[2][1] == 'x' || a[0][2] == 'x' && a[1][2] == 'x' && a[2][2] == 'x') {
		return 1;
	}
	else if (a[0][0] == 'o' && a[1][1] == 'o' && a[2][2] == 'o' || a[0][2] == 'o' && a[1][1] == 'o' && a[2][0] == 'o' || a[0][0] == 'o' && a[0][1] == 'o' && a[0][2] == 'o' || a[1][0] == 'o' && a[1][1] == 'o' && a[1][2] == 'o' || a[2][0] == 'o' && a[2][1] == 'o' && a[2][2] == 'o' || a[0][0] == 'o' && a[1][0] == 'o' && a[2][0] == 'o' || a[0][1] == 'o' && a[1][1] == 'o' && a[2][1] == 'o' || a[0][2] == 'o' && a[1][2] == 'o' && a[2][2] == 'o') {
		return 2;
	}
	int cht = 0;
	for (int i = 0; i <  3; ++i) {
		for (int j = 0; j < 3; ++j) {
			if (a[i][j] > '0' && a[i][j] < '9' + 1) {
				cht++;
			}
			if (cht==9) {
				return 3;
			}
		}
	}
		return 0;
}

int cordi(int z) {
	if (z == 1) {
		return 0;
	}
	if (z == 2) {
		return 0;
	}
	if (z == 3) {
		return 0;
	}
	if (z == 4) {
		return 1;
	}
	if (z == 5) {
		return 1;
	}
	if (z == 6) {
		return 1;
	}
	if (z == 7) {
		return 2;
	}
	if (z == 7) {
		return 2;
	}
	if (z == 9) {
		return 2;
	}
}

int cordi1(int z) {
	if (z == 1) {
		return 0;
	}
	if (z == 2) {
		return 1;
	}
	if (z == 3) {
		return 2;
	}
	if (z == 4) {
		return 0;
	}
	if (z == 5) {
		return 1;
	}
	if (z == 6) {
		return 2;
	}
	if (z == 7) {
		return 0;
	}
	if (z == 7) {
		return 1;
	}
	if (z == 9) {
		return 2;
	}
}
int main() {
	int chtx = 0;
	int chto = 0;
	while (true) {
		vector <vector <char>> a(3);
		int uq = '1';
		for (int i = 0; i < 3; ++i) {
			for (int j = 0; j < 3; ++j) {
				char s = uq;
				a[i].push_back(s);
				uq++;
			}
		}
		bool flag = 1;
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
		cout << "|" << a[0][0] << "|" << a[0][1] << "|" << a[0][2] << "|\n";
		m2 = 55;
		while (m2--) {
			cout << ' ';
		}
		cout << "_______\n";
		m2 = 55;
		while (m2--) {
			cout << ' ';
		}
		cout << "|" << a[1][0] << "|" << a[1][1] << "|" << a[1][2] << "|\n";
		m2 = 55;
		while (m2--) {
			cout << ' ';
		}
		cout << "_______\n";
		m2 = 55;
		while (m2--) {
			cout << ' ';
		}
		cout << "|" << a[2][0] << "|" << a[2][1] << "|" << a[2][2] << "|\n";
		m2 = 55;
		while (m2--) {
			cout << ' ';
		}
		cout << "_______\n";

		while (true) {
			if (flag == 1) {
				cout << "shas krestiky";
			}
			else if (flag == 0) {
				cout << "shas noliky";
			}
			cout << endl;
			int z;
			cin >> z;
			int z1 = cordi(z);
			int y = cordi1(z);
			if (flag == 1 && a[z1][y] > '0' && a[z1][y] < '9' + 1) {
				a[z1][y] = 'x';
				flag = 0;
			}
			else if (flag == 0 && a[z1][y] > '0' && a[z1][y] < '9' + 1) {
				a[z1][y] = 'o';
				flag = 1;
			}
			else {
				continue;
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
			cout << "|" << a[0][0] << "|" << a[0][1] << "|" << a[0][2] << "|\n";
			m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "_______\n";
			m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "|" << a[1][0] << "|" << a[1][1] << "|" << a[1][2] << "|\n";
			m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "_______\n";
			m2 = 55;
			while (m2--) {
				cout << ' ';
			}
			cout << "|" << a[2][0] << "|" << a[2][1] << "|" << a[2][2] << "|\n";
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

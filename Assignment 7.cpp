#include <iostream>

using namespace std;

class Towers {
public:
	Towers();
	Towers(int);
	void print();
	void moveDisks(char, char);
	~Towers();
private:
	int disks;
	char* towerA;
	char* towerB;
	char* towerC;
};

void toh(int, char, char, char, Towers*);

int main() {
	Towers* towers;
	int disks;
	char rod1 = 'A', rod2 = 'C', rod3 = 'B';
	bool end = false;
	do {
		cout << "How many disks would you like in this solution?\n";
		cin >> disks;
		system("CLS");
		towers = new Towers(disks);
		towers->print();
		system("pause");
		system("CLS");
		toh(disks, rod1, rod2, rod3, towers);
		cout << "\nWould you like to do another one?\n" << "1. Yes\n" << "2. No\n";
		cin >> disks;
		if (disks == 1) {
			end = false;
		}
		else if (disks == 2) {
			end = true;
		}
	} while (!end);
}

void toh(int n, char from, char to, char aux, Towers* towers) {
	if (n == 1) {
		cout << "\n Move disk 1 from tower " << from << " to tower " << to;
		towers->moveDisks(from, to);
		towers->print();
		system("pause");
		system("CLS");
		return;
	}
	toh(n - 1, from, aux, to, towers);
	cout << "\n Move disk " << n << " from tower " << from << " to tower " << to;
	towers->moveDisks(from, to);
	towers->print();
	system("pause");
	system("CLS");
	toh(n - 1, aux, to, from, towers);
}

Towers::Towers() {

}

Towers::Towers(int n) {
	disks = n;
	char j;
	towerA = new char[disks];
	towerB = new char[disks];
	towerC = new char[disks];
	for (int i = 0; i < n; i++) {
		towerA[i] = i+1+'0';
		towerB[i] = '-';
		towerC[i] = '-';
	}
}

void Towers::print() {
	cout << "\nTower A: ";
	for (int i = 0; i < disks; i++) {
		cout << towerA[i];
		if (i < disks - 1)
			cout << ",";
	}
	cout << "\nTower B: ";
	for (int i = 0; i < disks; i++) {
		cout << towerB[i];
		if (i < disks - 1)
			cout << ",";
	}
	cout << "\nTower C: ";
	for (int i = 0; i < disks; i++) {
		cout << towerC[i];
		if (i < disks - 1)
			cout << ",";
	}
	cout << "\n";
}

void Towers::moveDisks(char from, char to) {
	char temp = '-';
	int i = 0;
	if (from == 'A') {
		while (towerA[i] == temp) {
			i++;
		}
		temp = towerA[i];
		towerA[i] = '-';
	}
	if (from == 'B') {
		while (towerB[i] == temp) {
			i++;
		}
		temp = towerB[i];
		towerB[i] = '-';
	}
	if (from == 'C') {
		while (towerC[i] == temp) {
			i++;
		}
		temp = towerC[i];
		towerC[i] = '-';
	}
	i = 0;
	if (to == 'A') {
		while (towerA[i] == '-') {
			i++;
		}
		towerA[i - 1] = temp;
	}
	if (to == 'B') {
		while (towerB[i] == '-') {
			i++;
		}
		towerB[i - 1] = temp;
	}
	if (to == 'C') {
		while (towerC[i] == '-') {
			i++;
		}
		towerC[i - 1] = temp;
	}
}

Towers::~Towers() {
	
}

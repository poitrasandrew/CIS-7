#include <iostream>

using namespace std;

int GCDCalc(int, int);

int main() {
	int num1, num2;
	bool check = false, end = false;
	cout << "Let's find the GCD of 2 numbers.\n";
	do {
		cout << "Enter the first number: ";
		do {
			cin >> num1;
			if (num1 > 0) {
				check = true;
			}
			else {
				check = false;
				cout << "Please enter a positive integer: ";
			}
		} while (!check);
		cout << "Enter the second number: ";
		do {
			cin >> num2;
			if (num2 > 0) {
				check = true;
			}
			else {
				check = false;
				cout << "Please enter a positive integer: ";
			}
		} while (!check);
		cout << "The GCD of " << num1 << " and " << num2 << " is " << GCDCalc(num1, num2) << endl << endl;
		cout << "Would you like to do another one?\n" << "1. Yes\n" << "2. No\n";
		cin >> num1;
		if (num1 == 1) {
			end = false;
		}
		else if (num1 == 2) {
			end = true;
		}
	} while (!end);
}

int GCDCalc(int var1, int var2) {
	if (var2 == 0) {
		return var1;
	}
	return GCDCalc(var2, var1 % var2);
}

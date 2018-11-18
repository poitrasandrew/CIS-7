#include <iostream>
#include <string>

using namespace std;

bool WFFCheck(string);

int main() {
	string input;
	bool end = false;
	while (!end) {
		cout << "Enter a Formula with no spaces and press enter to see if it is a WFF.\n";
		getline(cin, input);
		if (WFFCheck(input)) {
			cout << "Is a Well Formed Formula!\n";
		}
		else {
			cout << "Not a Well Formed Formula.\n";
		}
		cout << "Would you like to enter a new formula?\n" << "1. Yes\n" << "2. Exit\n";
		cin >> input;
		cin.ignore();
		if (input == "1") {
			end = false;
		}
		if (input == "2") {
			end = true;
		}
	}
}

bool WFFCheck(string formula) {
	int n = formula.length();
	char* array = new char[n];
	strcpy(array, formula.c_str());
	for (int i = 0; i < n; i++) {
		//check for valid characters
		if ((array[i] != '^' && array[i] != '!' && array[i] != '-' && array[i] != '>') && (array[i] < 'A' || array[i] > 'Z')) {
			return false;
		}
		//check for correct implementation of ->
		if (array[i] == '-' && (array[i + 1] != '>' || array[i + 2] == 'V' || array[i + 2] < 'A' || array[i + 2] > 'Z' || array[i - 1] == 'V' || array[i - 1] < 'A' || array[i - 1] > 'Z') && array[i+2] != '!') {
			return false;
		}
		//check for correct implementation of ->
		if (array[i] == '>' && (array[i - 1] != '-' || array[i + 1] == 'V' || array[i + 1] < 'A' || array[i + 1] > 'Z' || array[i - 2] == 'V' || array[i - 2] < 'A' || array[i - 2] > 'Z') && array[i+1] != '!') {
			return false;
		}
		//check for no consecutive uses of ^ or V
		if ((array[i] == '^' || array[i] == 'V') && (array[i + 1] == '^' || array[i + 1] == 'V')) {
			return false;
		}
		//check for variable after !
		if (array[i] == '!'  && (array[i + 1] == 'V' || array[i + 1] < 'A' || array[i + 1] > 'Z')) {
			return false;
		}
		//check for no consecutive variables
		if ((array[i] > 'A' && array[i] < 'Z' && array[i] != 'V') && ((array[i + 1] > 'A' && array[i + 1] < 'Z' && array[i+1] != 'V') || array[i+1] == '!')) {
			return false;
		}
		//check for not ending on operator
		if (i == n - 1 && (array[i] == 'V' || array[i] < 'A' || array[i] > 'Z')) {
			return false;
		}
		//check not starting on operator besides !
		if (i == 0 && (array[i] == 'V' || array[i] < 'A' || array[i] > 'Z') && array[i] != '!') {
			return false;
		}
	}
	return true;
}

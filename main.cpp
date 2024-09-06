#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int count = 0;
	string cc;
	cout << "Enter a credit card number: i.e XXXX-XXXX-XXXX-XXXX" << endl;
	cin >> cc;
	for (char c : cc) {
		if (c == '-') {
			count++;
		}
	}
	if (cc.length() == 19 && count == 3) {
		cc.erase(remove(cc.begin(), cc.end(), '-'), cc.end());
		int sum = 0;
		for (int i = cc.length() - 1; i >= 0; i--) {
			int num = cc[i] - '0';
			if (i % 2 == 0) {
				num *= 2;
				if (num > 9) {
					num -= 9;
				}
			}
			sum += num;

		}		if (sum % 10 == 0) {
			cout << "Valid Credit Card" << endl;
		}
		else {
			cout << "Invalid Credit Card" << endl;
		}
	}
	else {
		cout << "Invalid Credit Card" << endl;
	}
	return 0;
}
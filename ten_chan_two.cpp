//10진수를 2진수로 바꾸는 프로그래밍
#include<iostream>
#include<cmath>
using namespace std;
int main() {
	int Decimal_number = 0;
	int Binary_number[8] = {0};
	cout << "십진수 입력 : ";
	cin >> Decimal_number;
	int cnt = 0;
	if (Decimal_number >= 0) {
		for (int i = 0; Decimal_number >= 1; i++) {
			Binary_number[i] = (Decimal_number % 2);
			Decimal_number /= 2;
		}for (int i = 7; i >= 0; i--) {
			if (Binary_number[i] == 1) {
				cnt++;
			}
			if (cnt > 0) {
				cout << Binary_number[i];
			}
		}
	}
	else {
		int Binary_number[8] = { 1 };
		Decimal_number = abs(Decimal_number) + 1;
		for (int i = 0; Decimal_number >= 1; i++) {
			Binary_number[i] = !(Decimal_number % 2);
			Decimal_number /= 2;
		}for (int i = 7; i >= 0; i--) {
			cout << Binary_number[i];
		}
	}
}
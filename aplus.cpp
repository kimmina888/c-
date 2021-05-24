#include<iostream>
using namespace std;

int main() {
	char A; 
	int i = 0;
	while (true) {
		cin >> A;
		if (A != 'a') break;
		i++;
		cout << i;
	}
}
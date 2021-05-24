#include<iostream>
using namespace std;
int main() {
	int iCode = 1000;
	cout << iCode << "->" << (char)iCode << endl;
	iCode = (int)1.4321;
	cout << iCode << endl;
	iCode = (int)1.5678;
	cout << iCode << endl;
	double dresult = 0;
	dresult = 100 + 3 / 2;
	cout << dresult << endl;
	dresult = 100 + double(3) / 2;
	cout << dresult << endl;
	return 0;
}
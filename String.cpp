
#include<iostream>
using namespace std;
int main() {
	const char* a = "MIrim School";
	const char* b = "Mrim Program";
	cout << strlen(a) << endl;
	cout << strlen(b) << endl;
	char c[10];
	strcpy(c, "My Home");
	//���ڿ��� �־� �� ���� strcpy�� ������Ѵ�.
	cout << c << endl;
	cout << strcmp(a, b) << endl;
}
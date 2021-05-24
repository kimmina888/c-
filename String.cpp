
#include<iostream>
using namespace std;
int main() {
	const char* a = "MIrim School";
	const char* b = "Mrim Program";
	cout << strlen(a) << endl;
	cout << strlen(b) << endl;
	char c[10];
	strcpy(c, "My Home");
	//문자열을 넣어 줄 때는 strcpy를 해줘야한다.
	cout << c << endl;
	cout << strcmp(a, b) << endl;
}
#include<iostream>
using namespace std;

int main() {
	char a;
	cin >> a;
	if (isalpha(a)) {
		cout << toupper(a) - ('A' - 1);
	}
	else {
		cout << "Error";
	}
	//cout << int(a-('A'-1)) << endl;
	//if (isupper(a)) {//isupper() 대문자인지 확인 하는 함수
	//	cout << int(a - ('A' - 1)) << endl;
	//}else if (islower(a)){
	//	cout << int(a - ('a' - 1)) << endl;//islower() 소문자인지 확인하는 함수
	//}
	//else {
	//	cout << "문자가 아닙니다.";
	//}
	//toupper() 대문자로 바꾸는 함수
}
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
	//if (isupper(a)) {//isupper() �빮������ Ȯ�� �ϴ� �Լ�
	//	cout << int(a - ('A' - 1)) << endl;
	//}else if (islower(a)){
	//	cout << int(a - ('a' - 1)) << endl;//islower() �ҹ������� Ȯ���ϴ� �Լ�
	//}
	//else {
	//	cout << "���ڰ� �ƴմϴ�.";
	//}
	//toupper() �빮�ڷ� �ٲٴ� �Լ�
}
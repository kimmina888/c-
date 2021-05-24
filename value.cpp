#include<iostream>
using namespace std;

int nValue = 100;
void subFunc() {
	int nval = 20;

	cout << "subFunc ::전역변수 : " << nValue << endl;
	cout << "subFunc ::지역변수 : " << nval << endl;
	
	nValue = 200;
	nval = 10;

	cout << "subFunc ::전역변수 : " << nValue << endl;
	cout << "subFunc ::지역변수 : " << nval << endl;
}

int main() {
	int nValue = 10;
	cout << "main ::전역변수 : " << ::nValue << endl;//지역변수명과 전역변수명의 이름은 동일
	cout << "main ::지역변수 : " << nValue << endl;//전역변수를 접근하려면 영역 연산자(::) 사용
	subFunc();
	cout << "main ::전역변수 : " << ::nValue << endl;
	cout << "main ::지역변수 : " << nValue << endl;
}

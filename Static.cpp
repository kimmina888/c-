#include<iostream>
using namespace std;

void jungjuk() {
	static int a = 0;//static을 붙이지 않을 시 계속 0으로 출력
	cout << "정적 변수 a는" << a << endl;
	a++;
}

int main()
{
	jungjuk();
	jungjuk();
	jungjuk();
	const int b = 3;
	//b = 5;//에러 발생
}
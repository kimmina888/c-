#include<iostream>
using namespace std;

void jungjuk() {
	static int a = 0;//static�� ������ ���� �� ��� 0���� ���
	cout << "���� ���� a��" << a << endl;
	a++;
}

int main()
{
	jungjuk();
	jungjuk();
	jungjuk();
	const int b = 3;
	//b = 5;//���� �߻�
}
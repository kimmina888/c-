#include<iostream>
using namespace std;

int nValue = 100;
void subFunc() {
	int nval = 20;

	cout << "subFunc ::�������� : " << nValue << endl;
	cout << "subFunc ::�������� : " << nval << endl;
	
	nValue = 200;
	nval = 10;

	cout << "subFunc ::�������� : " << nValue << endl;
	cout << "subFunc ::�������� : " << nval << endl;
}

int main() {
	int nValue = 10;
	cout << "main ::�������� : " << ::nValue << endl;//����������� ������������ �̸��� ����
	cout << "main ::�������� : " << nValue << endl;//���������� �����Ϸ��� ���� ������(::) ���
	subFunc();
	cout << "main ::�������� : " << ::nValue << endl;
	cout << "main ::�������� : " << nValue << endl;
}

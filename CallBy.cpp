#include<iostream>
using namespace std;

int square_Sum(int* sum) {
	*num = (*num) * (*num);
	return (*num) + (*num);
}
int square_Sum(int& sum) {
	num = num * num;
	return num + num;
}
int main() {
	int a = 3;
	cout << square_sum(&a) << endl;
	cout << "a�� ���� �ٲ���ٸ� 9�� ��µ˴ϴ�."; << a << endl;
	cout << square_sum(a) << endl;
	cout << "a�� ���� �ٲ���ٸ� 9�� ��µ˴ϴ�."; << a << endl;
}
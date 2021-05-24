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
	cout << "a의 값이 바뀌었다면 9가 출력됩니다."; << a << endl;
	cout << square_sum(a) << endl;
	cout << "a의 값이 바뀌었다면 9가 출력됩니다."; << a << endl;
}
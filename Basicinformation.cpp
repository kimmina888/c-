#include<iostream>
using namespace std;

int main(){
	cout << "char의 크기 : " << sizeof(char) << "byte\n";
	cout << "unsigned char의 크기 : " << sizeof(unsigned char) << "byte\n";
	cout << "short int의 크기 : " << sizeof(short int) << "byte\n";
	cout << "unsigned short int의 크기 : " << sizeof(unsigned short int) << "byte\n";
	cout << "int의 크기 : " << sizeof(int) << "byte\n";
	cout << "unsigned int의 크기 : " << sizeof(unsigned int) << "byte\n";
	cout << "long의 크기 : " << sizeof(long) << "byte\n";
	cout << "unsigned long의 크기 : " << sizeof(unsigned long) << "byte\n";
	cout << "long long의 크기 : " << sizeof(long long) << "byte\n";
	cout << "float의 크기 : " << sizeof(float) << "byte\n";
	cout << "double의 크기 : " << sizeof(double) << "byte\n";
	cout << "pointer 의 크기 : " << sizeof(void*) << "byte\n";
	cout << "int pointer 의 크기 : " << sizeof(int*) << "byte\n";
}
#include<iostream>

using namespace std;

int main() {
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* ptr = nullptr;
	ptr = nArray;
	cout << ptr << endl;
	ptr = nArray;
	cout << ptr << endl;
	ptr++;
	cout << ptr << endl;

	/*
	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int count = sizeof(nArray) / sizeof(int);
	int* ptr = nullptr;
	ptr = nArray;
	cout << *ptr << ", " << nArray[0] << endl;
	*ptr = 10;
	cout << *ptr << ", " << nArray[0] << endl;
	ptr = &nArray[0];
	cout << *ptr << ", " << nArray[1] << endl;
	cout << sizeof(ptr) << endl;
	cout << sizeof(*ptr) << endl;
	cout << sizeof(nArray) << endl;
	*/
	/*for (int i = 0; i < 10; i++) {
		cout << i << " : " << nArray[i] << endl;
	}
	cout << sizeof(nArray) << endl;*/
	return 0;
}
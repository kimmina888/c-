#include<iostream>
using namespace std;
void a()
int main() {
	short nArray[10] = { 0,1,2,3,4,5,6,7,8,9 };
	short* pArray = nullptr;
	pArray = nArray;

	cout << nArray[0] << " ," << *pArray<<endl;
	
	*pArray = 10;
	cout << nArray[0] << " ," << *pArray << endl;//0 0
	
	pArray = &nArray[1];
	cout << nArray[0] << " ," << *pArray << endl;//0 1

	pArray++;
	cout << nArray[0] << " ," << *pArray << endl;//0 2

	pArray = nArray;
	cout << *pArray << ", " << nArray[0] << endl;
	cout << pArray[0] << ", " << *nArray << endl;
	cout << sizeof(pArray) << endl;//4
	cout << sizeof(nArray) << endl;//20
	cout << sizeof(*pArray) << endl;//2

	//nArray=pArray; 오류발생
	/*int count = sizeof(nArray) / sizeof(int);
	for (int i = 0; i < count; i++) {
		cout << i << " : " << nArray[i] << endl;
	}*/
	/*cout <<sizeof(nArray)<< endl;
	return 0;*/
	a();
}
void a() {
	cout << "Test" << endl;
}
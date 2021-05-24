#include<iostream>
using namespace std;

int main(){
	void* pvalue = 0;

	//int val = 100;
	//pvalue = &val;
	//*(int *)pvalue = 200;

	//cout << *(int*)pvalue << endl;
	char Meassage1[]= "Welcome to Korea";
	char* pMeassage = Meassage1;
	for (int i = 0; i < (sizeof(Meassage1) / sizeof(char))-1; i++) {
		cout <<"++"<< *(pMeassage+i) << endl;
	}
	cout << sizeof(Meassage1) << endl;
	//*pMeassage = "Wellcome to Korea";

	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray;
	pArray = nArray;
	nArray = pArray;//배열명의 주소는 바꾸지 못한다.
}
#include<iostream>
using namespace std;
#define MAX_COUNT 100
#define MAX(a,b) a>b? a: b //not 문장 //전처리 
int main() {
	cout << MAX_COUNT << endl;
	int nMax = MAX(100, 200);
	cout << nMax << endl;
	return 0;
}
#include<iostream>
using namespcae std;
int main() {
	char cMaxVal = 0x7f;
	unsigned char ucMaxVal = 0xff;

	cout << "char형의 범위(1바이트) : " << (int)(char)(cMaxVal + 1) << "~" << intcMaxVal << endl;
	cout << "unsigned char형의 범위(1바이트) : " << (int)(char)(cMaxVal + 1) << "~" << intcMaxVal << endl;

}
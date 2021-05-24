#include<iostream>
using namespace std;
struct Account {
	char accID[20];//계좌번호
	char secID[20];//password
	char name[20];//이름
	int balance;
	void Deposit(int money) {
		acc.balance += money;
	}
	void Withdraw(int money) {
		acc.balance -= money;
	}
	void print();

};
int main() {
	mirim.print();
	Account mirim = { "1234","1357","개나리씨",1000 };
	mirim.Deposit("mirim", 300);//입금
	mirim.Withdraw(mirim, 300);//출금
}
void Account::print() {
	cout << "계좌번호 : " << mirim.accID << endl;
	cout << "비밀번호 : " << mirim.secID << endl;
	cout << "이름 : " << mirim.name << endl;
	cout << "잔액 : " << mirim.balance << endl;
}
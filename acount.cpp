#include<iostream>
using namespace std;
struct Account {
	char accID[20];//���¹�ȣ
	char secID[20];//password
	char name[20];//�̸�
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
	Account mirim = { "1234","1357","��������",1000 };
	mirim.Deposit("mirim", 300);//�Ա�
	mirim.Withdraw(mirim, 300);//���
}
void Account::print() {
	cout << "���¹�ȣ : " << mirim.accID << endl;
	cout << "��й�ȣ : " << mirim.secID << endl;
	cout << "�̸� : " << mirim.name << endl;
	cout << "�ܾ� : " << mirim.balance << endl;
}
#include<iostream>
using namespace std;
class CONTAC600 {
public:
	void Snottake(int id) { cout << id << "�๰ ����" << endl; }
	void Sneezetake(int id) { cout << id << "��ü�� ����" << endl; }
	void Snuffletake(int id) { cout << id << "�� �ձ�" << endl; }
	void take(int id) {
		Snottake(id);
		Sneezetake(id);
		Snuffletake(id);
	}
};
//class SnotCap {
//public:
//	void take(int id) { cout << id << "�๰ ����" << endl; }
//};
//class Sneezecap {
//public:
//	void take(int id) { cout << id << "��ü�� ����" << endl; }
//};
//class SnuffleCap {
//public:
//	void take(int id) { cout << id << "�� �ձ�" << endl; }
//};
class Patient {
public:
	int id;
public:
	/*void takeSiniveiCap(SnotCap cap) {
		cap.take(id);
	}
	void takeSneezecapCap(Sneezecap cap) {
		cap.take(id);
	}
	void takeSnuffleCap(SnuffleCap cap) {
		cap.take(id);
	}*/
	void takeCONTAC600(CONTAC600 cap) {
		cap.take(id);
	}
};

int main() {
	Patient suf = { 1001 };
	suf.takeCONTAC600(CONTAC600());
	return 0;
}
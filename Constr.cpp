#include<iostream>
using namespace std;

class Student {
private:
	int nHakBun;
	const char* sName;
public :
	Student();
	Student(int nHakbun, const char* sName);
	void show();
};

Student::Student() {
	nHakBun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;
}
Student::Student(int nHakBun, const char* sName) {
	this->nHakBun = nHakBun;
	this->sName = sName;
	cout << "�Ű������� �й��� ��ϵǾ����ϴ�." << endl;
}

void Student::show() {
	cout << "�й��� " << nHakBun << "�Դϴ�." << endl;
	cout << "�̸��� " << sName << "�Դϴ�." << endl;
}
int main() {
	Student student1;
	student1.show();
	Student student2(5678, "��̸�");
	student2.show();
	Student stu[3] = {
		Student(), Student(1111,"������"),
		Student(2222, "������")
	};
	for (int i = 0; i < 3; i++) {
		stu[i].show();
	}
	return 0;
}
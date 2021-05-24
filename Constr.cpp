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
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;
}
Student::Student(int nHakBun, const char* sName) {
	this->nHakBun = nHakBun;
	this->sName = sName;
	cout << "매개변수로 학번이 등록되었습니다." << endl;
}

void Student::show() {
	cout << "학번은 " << nHakBun << "입니다." << endl;
	cout << "이름은 " << sName << "입니다." << endl;
}
int main() {
	Student student1;
	student1.show();
	Student student2(5678, "김미림");
	student2.show();
	Student stu[3] = {
		Student(), Student(1111,"강아지"),
		Student(2222, "망아지")
	};
	for (int i = 0; i < 3; i++) {
		stu[i].show();
	}
	return 0;
}
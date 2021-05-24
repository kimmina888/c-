#include<iostream>
#include<string>
#define INWEN 7
using namespace std;
calss 계열{
	student a[]

}
class student{
private:
	char hakbun[5];
	char name[10];
	char grade;
	int kor, eng, mat, tot, rank;
	double avg;
public:
	student() {
		rank = 1;
	}
	void input(int i);
	void calc();
	void print();
	int gettot() {
		return tot;
	}
	int getrank() {
		return rank;
	}
	void addrank() {
		rank++;
	}
};
void student:: input(int i) {
	cout << i << "번 째 학생 입력" << endl;
	cout << "학번 입력 : ";
	cin >> hakbun;
	cout << endl;

	cout << "이름 입력 : ";
	cin >> name;
	cout << endl;

	cout << "국어 성적 입력 : ";
	cin >> kor;
	while (kor > 100 && kor < 0) {
		cout << "다시 입력 ";
		cin >> kor;
	}
	cout << endl;

	cout << "영어 성적 입력 : ";
	cin >> eng;
	while (eng > 100 && eng < 0) {
		cout << "다시 입력 ";
		cin >> eng;
	}
	cout << endl;

	cout << "수학 성적 입력 : ";
	cin >> mat;
	while (mat > 100 && mat < 0) {
		cout << "다시 입력 ";
		cin >> mat;
	}
	cout << endl;
}
void student::calc() {
	tot = kor + eng + mat;
	avg = tot / 3.0;
	switch ((int)(avg / 10)) {
	case 10: case 9: grade = 'A'; break;
	case 8: grade = 'B'; break;
	case 7: grade = 'C'; break;
	case 6: grade = 'D'; break;
	default: grade = 'F';
	}
}
void student::print() {
	cout << hakbun << "\t" << name << "\t" << kor << "\t" << eng;
	cout << "\t" << mat << "\t" << tot << "\t" << avg << "\t" << grade<<"wt"<<rank;
}

void ranking(student *stud) {
	for (int i = 0; i < INWEN-1; i++) {
		for (int j = i + 1; j < INWEN; j++) {
			if (stud[i].gettot() < stud[j].gettot()) {
				stud[i].addrank();
			}
			else if (stud[i].gettot() > stud[j].gettot()) {
				stud[j].addrank();
			}
		}
	}
}
int main() {
	student stu[INWEN];
	for (int i = 0; i <INWEN; i++) {
		stu[i] = {};
		stu[i].input(i+1);
		stu[i].calc();
	}
	cout << "학번\t" << "이름\t" << "국어\t" << "영어\t" << "수학\t"; 
	cout<< "총합\t" << "평균\t" << "등급\t"<<"석차등급\t";
	cout << endl;
	for (int i = 0; i < INWEN; i++) {
		stu[i].print();
		cout << endl;
	}
	return 0;
}
#include<iostream>
using namespace std;

class Ancestor
{
private:
	int a;
public:
	Ancestor() {
		cout << "Ancestor Constructor" << endl;
	}
	Ancestor(const Ancestor& obj) {
		cout << "Ancestor Constructor2" << endl;
	}
};
class ChildA :private Ancestor {
	//���
public:
	ChildA() {
		cout << "ChildA Constructor" << endl;
	}
	ChildA(const ChildA& obj) {
		cout << "ChildA Constructor2" << endl;
	}

};
class ChildB :private Ancestor {
	//���
public:
	ChildB() {
		cout << "ChildB Constructor" << endl;
	}
	ChildB(const ChildB& obj) {
		cout << "ChildB Constructor2" << endl;
	}

};
int main() {
	ChildA a1;
	ChildB(a2) = a1;
	ChildB b1;
	ChildB b2 = b1;
	return 0;
}
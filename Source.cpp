#include<iostream>

using namespace std;
namespace definition {
	int jungui = 10;
}
using namespace definition;
namespace justice {
	int jungui = 20;
}
int main() {
	int a;
	cout << "ют╥б";
	cin >> a;
	cout << a;
	cout << jungui<<endl <<endl;
	cout << justice::jungui << endl << endl;
}
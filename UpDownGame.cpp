#include<iostream>
#include<time.h>
#include<Windows.h>
#include<string>
using namespace std;
enum Color
{
	BLACK,
	BLUE,
	GREEN,
	CYAN,
	RED,
	MAGENTA,
	BROWN,
	LIGHTGRAY,
	DARKGRAY,
	LIGHTBLUE,
	LIGHTGREEN,
	LIGHTCYAN,
	LIGHTRED,
	LIGHTMAGENTA,
	YELLOW,
	WHITE
};
void textcolor(int foreground, int background)
{
	int color = foreground + background * 16;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

inline void line(void) {
	cout << "------------------------------------------------------------------------------------------------------------------------" << endl;
}
int main() {
	boolean game = 1;
	while (game) {
		system("color 140");
		srand(time(NULL));
		textcolor(WHITE, RED);
		cout << "						   Up & Down Game							" << endl;
		line();
		cout << "						   -��Ģ-							" << endl;
		cout << "1.pc�� �����Ѱ��� �����մϴ�(1~10)						" << endl;
		cout << "2.����� ���ڸ� �Է��ϸ� pc�� ���� ���ں��� ũ�� Down���, ������ Up ����� �մϴ�. ��ȸ�� 3��							" << endl;
		line();
		cout << "					���� ������ ���ҽÿ� start�� �Է����ּ���." << endl;
		string start = "";
		cin >> start;
		if (start.compare("start") == 0) {
			system("cls");
			int num = (rand() % 10) + 1;
			int Usnum = 0;
			cout << "							���� ����" << endl;
			line();
			for (int i = 1; i <= 3; i++) {
				cout << i << "ȸ : ";
				cin >> Usnum;
				if (Usnum > 10 || Usnum < 1) {
						cout << "�߸��� �� �Է� �ٽ� �Է����ֽʽÿ�. ������ (1~10)�Դϴ�." << endl;
						cout << i << "��° �ٽ� �Է� : ";
						cin >> Usnum;
				}if (Usnum == num) {
					cout << "					����					" << endl;
					cout << "					" << i << "ȸ�� ����" << endl;
					cout << "���࿡ ������ �ѹ� �� �ϰ� �����ôٸ� 1�� �����ֽð� ������ �����ø� 0�� �����ּ���." << endl;
					cin >> game;
					if (game == 0) {
						system("cls");
						cout << "������ �����Ǿ����ϴ�.";
						cout << "������ �������� �ƹ� Ű�� ��������" << endl;
						break;
					}
				}
				else if (i == 3 && Usnum != num) {
					cout << "���� ������ �����մϴ�." << endl;
					cout << "���� " << num << "�Դϴ�. ������ȸ�� �ѹ� �� �����ϼ���.";
					cout << "���࿡ ������ �ѹ� �� �ϰ� �����ôٸ� 1�� �����ֽð� ������ �����ø� 0�� �����ּ���." << endl;
					cin >> game;
					if (game == 0) {
						system("cls");
						cout << "������ �����Ǿ����ϴ�.";
						cout << "������ �������� �ƹ� Ű�� ��������" << endl;
						break;
					}
				}
				else if (Usnum != num) {
					if (Usnum > num) {
						cout << "Down" << endl;
					}
					else {
						cout << "Up" << endl;
					}
				}
			}
		}
	}
}
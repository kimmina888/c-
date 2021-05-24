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
		cout << "						   -규칙-							" << endl;
		cout << "1.pc가 숫자한개를 선정합니다(1~10)						" << endl;
		cout << "2.당신이 숫자를 입력하면 pc가 정한 숫자보다 크면 Down출력, 작으면 Up 출력을 합니다. 기회는 3번							" << endl;
		line();
		cout << "					게임 시작을 원할시에 start를 입력해주세요." << endl;
		string start = "";
		cin >> start;
		if (start.compare("start") == 0) {
			system("cls");
			int num = (rand() % 10) + 1;
			int Usnum = 0;
			cout << "							게임 시작" << endl;
			line();
			for (int i = 1; i <= 3; i++) {
				cout << i << "회 : ";
				cin >> Usnum;
				if (Usnum > 10 || Usnum < 1) {
						cout << "잘못된 값 입력 다시 입력해주십시오. 범위는 (1~10)입니다." << endl;
						cout << i << "번째 다시 입력 : ";
						cin >> Usnum;
				}if (Usnum == num) {
					cout << "					정답					" << endl;
					cout << "					" << i << "회에 정답" << endl;
					cout << "만약에 게임을 한번 더 하고 싶으시다면 1을 적어주시고 끝내고 싶으시면 0을 적어주세요." << endl;
					cin >> game;
					if (game == 0) {
						system("cls");
						cout << "게임이 종류되었습니다.";
						cout << "게임을 끝낼려면 아무 키나 눌르세요" << endl;
						break;
					}
				}
				else if (i == 3 && Usnum != num) {
					cout << "실패 게임을 종류합니다." << endl;
					cout << "답은 " << num << "입니다. 다음기회에 한번 더 도전하세요.";
					cout << "만약에 게임을 한번 더 하고 싶으시다면 1을 적어주시고 끝내고 싶으시면 0을 적어주세요." << endl;
					cin >> game;
					if (game == 0) {
						system("cls");
						cout << "게임이 종류되었습니다.";
						cout << "게임을 끝낼려면 아무 키나 눌르세요" << endl;
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
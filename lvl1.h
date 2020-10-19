using namespace std;
void lvl1(){
	HANDLE hOUTPUT = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(hOUTPUT,FOREGROUND_GREEN | FOREGROUND_INTENSITY); // Я хз Я Ctrl C + Ctrl V Оно делайт текст зеленым Ы
	cout << "Exidy 1978" << endl;
	Sleep(2000);
	cout << "OS..." << endl;
	Sleep(5000);
	system("clear");  // поменяй на cls есди ты винда ЪУЪ
	cout << "Exidy 1978" << endl;
	cout << "OS";
	SetConsoleTextAttribute(hOUTPUT,FOREGROUND_RED   | FOREGROUND_INTENSITY); // Делаем красный цвет
        cout << "[OK]" << endl;
	SetConsoleTextAttribute(hOUTPUT,FOREGROUND_GREEN | FOREGROUND_INTENSITY); // Я хз Я Ctrl C + Ctrl V Оно делайт текст зеленым Ы
	Sleep(5000);
	system("clear");
}

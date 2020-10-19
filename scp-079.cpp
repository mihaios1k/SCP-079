#include <iostream>
#include "windows.h"
#include <cstdlib>
#include "lvl1.h"

using namespace std;

int main(){
	int ch;
	cout << "[1]SCP-079" << endl;
	cout << "[0]Exit" << endl;
	cout << ":";
	cin >> ch;
	if (ch == 1){system("clear"); lvl1();} // поменяй на cls если ты на винде ЪУЪ
	else if (ch == 0){exit(1);}
}


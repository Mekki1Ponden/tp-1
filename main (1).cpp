#include "Keeper.h"
#include "speakers.h"
#include "Program.h"
#include "Management.h"
#include "Menu.h"

int main() {
	setlocale(LC_ALL, "");

	Keeper<Program> ob1;
	Keeper<Management> ob2;
	Keeper<speakers> ob3;

	int menu;
	int flag = 1;
	while (flag) {
		system("cls");
		cout << "1 - program." << endl;
		cout << "2 - administration." << endl;
		cout << "3 - speakers." << endl;
		cout << "4 - exit." << endl;
		cout << "enter the number: "; 
		cin >> menu;
		switch (menu) {
		case 1: Menu(ob1, "program.txt"); break;
		case 2: Menu(ob2, "administration.txt"); break;
		case 3: Menu(ob3, "speakers.txt"); break;
		case 4: flag = 0; break;
		default: cout << "error" << endl; system("pause"); break;
		}
	}
}
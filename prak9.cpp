#include <iostream>
#include "Class.h"
#include<string>
#include<vector>
using namespace std;
Geschenk objeckts(0);
int main() {
	setlocale(LC_ALL, "rus");
	bool flag = true;
	cout << "Добро пожаловать в приложение Новогодний подарок!\n";
	while (flag) {
		 cout << "Выберите цифру в соответствие с командой, которую хотите выполнить:\n" << 
	"0)Выход\n1)Добавить конфету\n2)Показать данные подарка\n3)Посчитать вес подарка\n" <<
	"4)Найти конфету по диапозону содержания сахара\n5)Сортировка конфет по параметру\nКоманда №";
		 int oper; cin >> oper; cout << endl;
		switch (oper){
		case 0: cout << "Отлично поработали. До свидания!\n"; flag = false; break;
		case 1: objeckts.addBonbons(); break;
		case 2: objeckts.showBonbons(); break;
		case 3: objeckts.sumW(); break;
		case 4: objeckts.find(); break;
		case 5: objeckts.sortBonbons(); break;
		default: cout << "Команда не определена! Попробуйте ввести другой номер команды.\n\n"; break; } }
return 0;}

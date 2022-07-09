#include "Class.h"
#include<iostream>
#include<algorithm>
void Geschenk::addBonbons() {
	std::string type; //тип конфеты
	int sugar; //содержание сахара
	int w; //вес конфеты
	std::cout << "Введите тип конфеты: "; std::cin >> type;
	std::cout << "Введите содержание сахара: "; std::cin >> sugar;
	std::cout << "Введите вес конфеты: "; std::cin >> w;
	Bonbons bonbons(type, sugar, w); objeckts.push_back(bonbons);
	std::cout << std::endl;
}
void Geschenk::showBonbons() {
	if (objeckts.empty()) std::cout << "Подарок пуст.\n\n";
	else for (int i = 0; i < objeckts.size(); i++) {
		Bonbons bonbons = objeckts[i]; std::cout << "Сладость №" << i + 1 << ":\nТип конфеты: " << bonbons.getType() <<
			"\nСодержание сахара: " << bonbons.getSugar() << "\nВес конфеты: " << bonbons.getW() << std::endl << std::endl;
	}
}

int Geschenk::sumW() {int sumw = 0;
	for (int i = 0; i < objeckts.size(); i++) {
		Bonbons bonbons = objeckts[i]; sumw += bonbons.getW();}
	std::cout << "Вес подарка: " << sumw << std::endl << std::endl;
return sumw;}

void Geschenk::find() {
	if (objeckts.empty()) std::cout << "Подарок пуст.\n\n";
	else {int a, b, kol = 0; std::cout << "Введите диапозон содержания сахара: "; std::cin >> a >> b; std::cout << std::endl;
	for (int i = 0; i < objeckts.size(); i++) {Bonbons bonbons = objeckts[i];
	if (bonbons.getSugar() >= a && bonbons.getSugar() <= b) { std::cout << "Конфета №" << i + 1 << "\n"; kol++; } }
	if (kol == 0) std::cout << "Не найдено конфет в данном диапозоне!\n\n"; } }

bool cmpType(Bonbons& objeckts1, Bonbons& objeckts2) {return objeckts1.getType() < objeckts2.getType();}
bool cmpSugar(Bonbons& objeckts1, Bonbons& objeckts2) { return objeckts1.getSugar() < objeckts2.getSugar(); }
bool cmpW(Bonbons& objeckts1, Bonbons& objeckts2) { return objeckts1.getW() < objeckts2.getW(); }

void Geschenk::sortBonbons() {
	if (objeckts.empty()) std::cout << "Подарок пуст.\n\n";
	else { std::cout << "Сортировать по параметру:\n" <<
		"1)Тип конфеты\n2)Содержание сахара\n3)Вес конфеты\n" <<
		"Сортировать по №"; int num; std::cin >> num; std::cout << std::endl;
	switch (num){
	case 1: std::sort(objeckts.begin(), objeckts.end(), cmpType); break;
	case 2: std::sort(objeckts.begin(), objeckts.end(), cmpSugar); break;
	case 3: std::sort(objeckts.begin(), objeckts.end(), cmpW); break;
	
	default: std::cout << "Номер не определён! Попробуйте ввести другой номер сортировки.\n\n"; break;}
	std::cout << "Сортировка прошла успешно!\n\n";} }
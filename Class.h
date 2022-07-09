#include<string>
#include<vector>
#include<iostream>
class Bonbons {
private:
	std::string type; //тип конфеты
	int sugar; //содержание сахара
	int w; //вес конфеты
public:
	Bonbons(std::string type, int sugar, int w) { this->type = type; this->sugar = sugar; this->w = w; }
	int getW() { return w; } //гетер веса конфеты
	int getSugar() { return sugar; } //гетер содержания сахара
	std::string getType() { return type; } //гетер типа конфеты
};
class Geschenk {
private:
	std::vector <Bonbons> objeckts; //массив конфет
	int w; //вес подарка
public:
	Geschenk(int w) { this->w = w; }
	int getW() { return w; } //гетер веса подарка
	int sumW(); //общий вес подарка
	void addBonbons(); //добавить конфету в подарок
	void showBonbons(); //показать данные подарка
	void sortBonbons(); //сортировать конфету по параметру
	void find(); //найти конфету по диапозону содержания сахара
};
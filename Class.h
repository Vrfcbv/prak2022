#include<string>
#include<vector>
#include<iostream>
class Bonbons {
private:
	std::string type; //��� �������
	int sugar; //���������� ������
	int w; //��� �������
public:
	Bonbons(std::string type, int sugar, int w) { this->type = type; this->sugar = sugar; this->w = w; }
	int getW() { return w; } //����� ���� �������
	int getSugar() { return sugar; } //����� ���������� ������
	std::string getType() { return type; } //����� ���� �������
};
class Geschenk {
private:
	std::vector <Bonbons> objeckts; //������ ������
	int w; //��� �������
public:
	Geschenk(int w) { this->w = w; }
	int getW() { return w; } //����� ���� �������
	int sumW(); //����� ��� �������
	void addBonbons(); //�������� ������� � �������
	void showBonbons(); //�������� ������ �������
	void sortBonbons(); //����������� ������� �� ���������
	void find(); //����� ������� �� ��������� ���������� ������
};
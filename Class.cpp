#include "Class.h"
#include<iostream>
#include<algorithm>
void Geschenk::addBonbons() {
	std::string type; //��� �������
	int sugar; //���������� ������
	int w; //��� �������
	std::cout << "������� ��� �������: "; std::cin >> type;
	std::cout << "������� ���������� ������: "; std::cin >> sugar;
	std::cout << "������� ��� �������: "; std::cin >> w;
	Bonbons bonbons(type, sugar, w); objeckts.push_back(bonbons);
	std::cout << std::endl;
}
void Geschenk::showBonbons() {
	if (objeckts.empty()) std::cout << "������� ����.\n\n";
	else for (int i = 0; i < objeckts.size(); i++) {
		Bonbons bonbons = objeckts[i]; std::cout << "�������� �" << i + 1 << ":\n��� �������: " << bonbons.getType() <<
			"\n���������� ������: " << bonbons.getSugar() << "\n��� �������: " << bonbons.getW() << std::endl << std::endl;
	}
}

int Geschenk::sumW() {int sumw = 0;
	for (int i = 0; i < objeckts.size(); i++) {
		Bonbons bonbons = objeckts[i]; sumw += bonbons.getW();}
	std::cout << "��� �������: " << sumw << std::endl << std::endl;
return sumw;}

void Geschenk::find() {
	if (objeckts.empty()) std::cout << "������� ����.\n\n";
	else {int a, b, kol = 0; std::cout << "������� �������� ���������� ������: "; std::cin >> a >> b; std::cout << std::endl;
	for (int i = 0; i < objeckts.size(); i++) {Bonbons bonbons = objeckts[i];
	if (bonbons.getSugar() >= a && bonbons.getSugar() <= b) { std::cout << "������� �" << i + 1 << "\n"; kol++; } }
	if (kol == 0) std::cout << "�� ������� ������ � ������ ���������!\n\n"; } }

bool cmpType(Bonbons& objeckts1, Bonbons& objeckts2) {return objeckts1.getType() < objeckts2.getType();}
bool cmpSugar(Bonbons& objeckts1, Bonbons& objeckts2) { return objeckts1.getSugar() < objeckts2.getSugar(); }
bool cmpW(Bonbons& objeckts1, Bonbons& objeckts2) { return objeckts1.getW() < objeckts2.getW(); }

void Geschenk::sortBonbons() {
	if (objeckts.empty()) std::cout << "������� ����.\n\n";
	else { std::cout << "����������� �� ���������:\n" <<
		"1)��� �������\n2)���������� ������\n3)��� �������\n" <<
		"����������� �� �"; int num; std::cin >> num; std::cout << std::endl;
	switch (num){
	case 1: std::sort(objeckts.begin(), objeckts.end(), cmpType); break;
	case 2: std::sort(objeckts.begin(), objeckts.end(), cmpSugar); break;
	case 3: std::sort(objeckts.begin(), objeckts.end(), cmpW); break;
	
	default: std::cout << "����� �� ��������! ���������� ������ ������ ����� ����������.\n\n"; break;}
	std::cout << "���������� ������ �������!\n\n";} }
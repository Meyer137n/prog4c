#include "dop.h"
#include <iostream>
#include <stdio.h>
using namespace std;

dop::dop()
{
	hdisc = 0;
	energy = 0;
	os = "-";
}

dop::dop(int hdisc, int energy, std::string os)
{
	this->os = os;
	this->hdisc = hdisc;
	this->energy = energy;
}

void dop::vvod()
{
	cout << "\nВведите объём жесткого диска ГБ: ";
	cin >> hdisc;
	cout << " Введите мощность блока питания Вт: ";
	cin >> energy;
	cout << "Введите название операционной системы: ";
	while (getchar() != '\n');
	getline(std::cin, os);

}
void dop::vivod()
{
	cout << " Объём жёсткого диска: " << hdisc << " ГБ"<< endl;
	cout << " Мощность блока питания: " << energy << " Вт" << endl;
	cout << " Операционная система: " << os << endl;
}
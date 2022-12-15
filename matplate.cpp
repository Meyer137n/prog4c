#include "matplate.h"
#include <iostream>
#include <stdio.h>

using namespace std;

matplate::matplate()
{
	name="-";
	slots = 0;
}
matplate::matplate( std::string name, int slots)
{
	this->name = name;
	this->slots = slots;
}

void matplate::vvod()
{
	cout << "\n Введите название материнской платы: ";
	while (getchar() != '\n');
	getline(cin, name);
	cout << " Введите количество слотов для оперативной памяти: ";
	cin >> slots;
}
void matplate::vivod()
{
	cout << " Название материнской платы: " << name << endl;
	cout << " Количество слотов для оперативной памяти: " << slots << endl;
}


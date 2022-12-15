#include "ram.h"
#include <iostream>
#include <stdio.h>
using namespace std;

ram::ram()
{
	name = "-";
	opermemory = 0;
}
ram::ram(std::string name, int opermemory)
{
	this->name= name;
	this->opermemory = opermemory;

}

void ram::vvod()
{
	cout << "\n Введите тип оперативной памяти: ";
	while (getchar() != '\n');
	getline(std::cin, name);
	cout << " Введите объём оперативной памяти ГБ: ";
	cin >> opermemory;
}
void ram::vivod()
{
	cout << " Тип оперативной памяти: " << name << endl;
	cout << " Объём оперативной памяти: " << opermemory << " ГБ" << endl;
}


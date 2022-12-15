#include "videocard.h"
#include <iostream>
#include <stdio.h>
#define default_name "-"

using namespace std;

videocard::videocard()
{
	name = "-";
	videomemory = 0;
}
videocard::videocard(std::string name, int videomemory)
{
	this->name = name;
	this->videomemory = videomemory;
}

void videocard::vvod()
{
	cout << "\n Введите название видеокарты: ";
	while (getchar() != '\n');
	getline(std::cin, name);
	cout << " Введите объём видеопамяти ГБ: ";
	cin >> videomemory;
}
void videocard::vivod()
{
	cout << " Название видеокарты: " << name << endl;
	cout << " Объём видеопамяти: " << videomemory << " ГБ" << endl;
}


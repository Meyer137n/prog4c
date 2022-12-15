#include <iostream>
#include <Windows.h>
#include <string>

#include "computer.h"
#include "matplate.h"
#include "ram.h"
#include "processor.h"
#include "videocard.h"
#include "dop.h"
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int kol;
	string str;
	computer::sys_mas(&str);
	cout << "\n\n\n System massage: "<< str;
	computer::sys_mas(str);
	cout << "\n\n\n System massage: " << str << "\n\n\n";
	cout << "\n Введите количество компьютеров: ";
	cin >> kol;
	computer* pc = new computer[kol];
	for(int i = 0; i < kol; i++)
	{
		pc[i].set_computer();
	}
	cout << "\n\n";
	for (int i = 0; i < computer::get_count(); i++)
	{
		pc[i].get_computer();
	}
	search_id(pc);
	delete[] pc;
	return 0;
}

void search_id(computer pc[])
{
	int s_id;
	int check = computer::get_count();
	cout << "\n\n Введите id компьютера: ";
	cin >> s_id;
	for (int i = 0; i < computer::get_count(); i++)
	{
		if (pc[i].id == s_id)
		{
			pc[i].get_computer();
			break;
		}
		else
		{
			check--;
		}
	}
	if(check==0)
		cout << "\n Компьютер с таким id не существует!";
}
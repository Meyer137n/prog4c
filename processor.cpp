#include "processor.h"
#include <iostream>
#include <stdio.h>
using namespace std;

processor::processor()
{
	name = "-";
	cores = 0;
	streams = 0;
	frequency = 0;
}
processor::processor(std::string name, int cores, int streams, double frequency)
{
	this->name = name;
	this->cores = cores;
	this->streams = streams;
	this->frequency = frequency;

}

void processor::vvod()
{
	cout << "\n Введите название процессора: ";
	while (getchar() != '\n');
	getline(std::cin, name);
	cout << " Введите количество ядер процессора: ";
	cin >> cores;
	cout << " Введите количество потоков процессора: ";
	cin >> streams;
	cout << " Введите частоту процессора ГГц: ";
	cin >> frequency;
	
}
void processor::vivod()
{
	cout << " Название процессора: " << name << endl;
	cout << " Количество ядер процессора: " << cores << endl;
	cout << " Количество потоков процессора: " << streams << endl;
	cout << " Частота процессора: " << frequency << " ГГц" << endl;
}

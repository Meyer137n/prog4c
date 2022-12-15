#pragma once
#include <string>
class processor
{
private:
	std::string name;
	int cores;
	int streams;
	double frequency;
public:
	processor();
	processor(std::string name, int cores, int streams, double frequency);
	void vvod();
	void vivod();
};

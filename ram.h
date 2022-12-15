#pragma once
#include <string>
class ram
{
private:
	std::string name;
	int opermemory;
public:
	ram();
	ram(std::string name, int opermemory);
	void vvod();
	void vivod();
};


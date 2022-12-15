#pragma once
#include <string>
class dop
{
private: 
	int hdisc;
	int energy;
	std::string os;
public:
	dop();
	dop(int hdisc, int energy, std::string os);
	void vvod();
	void vivod();
};




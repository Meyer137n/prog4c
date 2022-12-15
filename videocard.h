#pragma once
#include <string>
class videocard
{
private:
	std::string name;
	int videomemory;
public:
	videocard();
	videocard(std::string name, int videomemory);
	void vvod();
	void vivod();
};


#pragma once
#include <string>

class Component
{
public:
	virtual void GetDetails() = 0;
	virtual std::string GetName() = 0;
	virtual double GetMark() = 0;
};

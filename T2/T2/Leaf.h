#pragma once
#include "Component.h"
#include <iostream>
 
class Leaf : public Component
{
public:
	void GetDetails() override;
	 std::string GetName() override;
	 double GetMark() override;
	 Leaf(const std::string& name, double mark);
private:
	std::string name;
	double mark;
};

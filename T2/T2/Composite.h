#pragma once
#include "Component.h"
#include <iostream>
#include <list>

class Composite : public Component
{
public:
	void GetDetails() override;
	std::string GetName() override;
	double GetMark() override;

	void AddComponent(Component* component);
	Composite(const std::string& name);
private:
	std::string name;
	double mark;
	std::list<Component*> components;

};
#include "Leaf.h"

Leaf::Leaf(const std::string& name, double mark) : name(name), mark(mark) {}

void Leaf::GetDetails()
{
	std::cout << name << " " << mark << std::endl;
}
std::string Leaf::GetName()
{
	return name;
}
double Leaf::GetMark()
{
	return mark;
}
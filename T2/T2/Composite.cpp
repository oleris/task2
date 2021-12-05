#include "Composite.h"

Composite::Composite(const std::string& name) : name(name) {}

void Composite::GetDetails()
{
	std::cout << name << " Average mark: " << GetMark() << std::endl;
	for (Component* component : components)
	{
		component->GetDetails();
	}
}
std::string Composite::GetName()
{
	return name;
}
double Composite::GetMark()
{
	mark = 0;
	for (Component* component : components)
	{
	mark += component->GetMark();
	}

	return mark/components.size();
}
void Composite::AddComponent(Component* component)
{
	components.push_back(component);
}
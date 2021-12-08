#include "Leaf.h"
#include "Composite.h"
#include <iostream>
#include <vector>

std::vector<Composite*> allGroups;

void SeeAllGroups()
{
	std::cout << "All groups:" << std::endl;
	for (Composite* composite : allGroups)
	{
		std::cout << composite->GetName() << std::endl;
	}
}
void CreateGroup()
{
	std::cout <<"Enter name of group:"<< std::endl;
	std::string grName;
	std::cin >> grName;
	Composite* group1 = new Composite(grName);
	allGroups.push_back(group1);
	std::cout << "Group was created." << std::endl;
}
void addstudent()
{
	double studentMark;
	std::string studentName;
	std::string Group;

	std::cout << "Enter name of student" << std::endl;
	std::cin >> studentName;
	std::cout << "Enter mark" << std::endl;
	std::cin >> studentMark;

	Leaf* student1 = new Leaf(studentName,studentMark);
	
	std::cout << "Student was created." << std::endl;
	std::cout << "in what group student should be added?" << std::endl;
	SeeAllGroups();
	std::cin >> Group;
	for (Composite* composite : allGroups)
	{
		if (composite->GetName() == Group)
		{
			composite->AddComponent(student1);
			std::cout << "Student was added" << std::endl;
		}
	}
}
void SeeGroup()
{
	std::string GroupName;
	std::cout << "Enter a name of Group:" << std::endl;
	std::cin >> GroupName;

	for (Composite* composite : allGroups)
	{
		if (composite->GetName() == GroupName)
		{
			composite->GetDetails();
		}
	}
}
int main()
{
	std::string input;
	while (input != "q")
	{
		std::cout << " 1 - Create Group of students\n 2 - All Groups\n 3 - Add a student to Group\n 4 - See a Group\n Q - for exit\n";
		std::cin >> input;
		if (input == "1")
		{
			std::cout << "\x1B[2J\x1B[H";
			std::cout << "\n";
			CreateGroup();

		}
		else if (input == "2")
		{
			std::cout << "\x1B[2J\x1B[H";
			std::cout << "\n";
			SeeAllGroups();
		
		}
		else if (input == "3")
		{
			std::cout << "\x1B[2J\x1B[H";
			std::cout << "\n";
			addstudent();

		}
		else if (input == "4")
		{
			std::cout << "\x1B[2J\x1B[H";
			std::cout << "\n";
			SeeGroup();
		}
		else
		{
			std::cout << "\x1B[2J\x1B[H";
			std::cout << "Wrong input" << std::endl;
			std::cout << "\n";
			
		}
	}
}

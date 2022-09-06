#include "schoolSystem.h"

void schoolSystem::run()
{
	int input = 0;
	int counter = 0;
	while (true)
	{
		
		menu();

		//meny
		//input
		//feedback
		std::cout << "loop: " << counter << "\n";
		counter++;
		std::cin.get();

		

		
		
	}
}

void schoolSystem::addStudent()


{
	Student Student;
	Student.name = "vlka";
	Student.age = 123;

	students.push_back(Student);
}

void schoolSystem::removeStudent()
{

}

void schoolSystem::menu()
{
	std::cout << "what do you want to do? \n" << "1. new student \n" << "2. new class \n" << "3. add student to class \n" << "4. look for student \n" << "5. information about student \n" << "6. remove student from class \n" << "7. remove student from system \n" << "8. information about class";
}
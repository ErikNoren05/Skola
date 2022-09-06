#include "schoolSystem.h"

void schoolSystem::run()
{
	int counter = 0;
	while (true)
	{

		//meny
		//input
		//feedback
		std::cout << "loop: " << counter << "\n";
		counter++;
		std::cin.get();


		int input;
		if (input = 1) addStudent();
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

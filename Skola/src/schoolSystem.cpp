#include "schoolSystem.h"

void schoolSystem::run()
{
	int input = 0;
	int ålder = 0;
	std::string typing = "";
	std::string controller = "";
	int counter = 0;
	
	while (true)
	{
		menu();
		std::cin >> input;
		

		

		
		switch (input)
		{
		case 1:

			
				std::cout << "vad heter hen? \n";
				std::cin >> typing;
				std::transform(typing.begin(), typing.end(), typing.begin(), [](unsigned char c) {return std::tolower(c); });

				std::cout << "how old is hen? \n";
				std::cin >> ålder;
				

				std::cout << "student " << typing << " that is " << ålder << " years old has been added \n";

				addStudent(typing, ålder);
				
				for (auto i : students)
				{
					std::cout << i.name <<" " << "\n";
					std::cout << i.age <<" " << "\n";
				}

				break;
			

		case 2:

			std::cout << "Whats the name of the class? \n";
				std::cin >> typing;
				std::transform(typing.begin(), typing.end(), typing.begin(), [](unsigned char c) {return std::tolower(c); });

				addclass(typing);
				for (auto i : schoolClasses)
				{
					std::cout << i << " " << "\n";
				}

			break;
			
		case 3:

			std::cout << "whats the name of the student? \n";
			std::cin >> typing;
			for (auto i : students)
			{
				

				if(typing == i.name)
				{
					std::cout << "hej";
				}

				std::cout << "fel";
				
			}

			break;

		case 4:

			break;

		case 5:

			break;

		case 6:

			break;

		case 7:

			break;

		case 8:
			
			break;

		case 9: 
			std::cout << "hejda";
			return;

		
		}
		
		
	}
	std::cout << "utanfor while";
	std::cin.get();
}

void schoolSystem::addStudent(std::string newName, int newAge)
{
	Student Student;
	Student.name = newName;
	Student.age = newAge;

	students.push_back(Student);
	
}

void schoolSystem::addclass(std::string newName)
{
	Schoolclass schoolclass;
	schoolclass.name = newName;

	schoolClasses.push_back(schoolclass.name);
}

void schoolSystem::removeStudent()
{

}

void schoolSystem::menu()
{
	std::cout << "what do you want to do? \n" << "1. new student \n" << "2. new class \n" << "3. add student to class \n" << "4. look for student \n" << "5. information about student \n" << "6. remove student from class \n" << "7. remove student from system \n" << "8. information about class \n" << "9. avsluta \n";
}



//To lower function
//std::transform(input.begin(), input.end(), input.begin(), [](unsigned char c) {return std::tolower(c); });

//meny
//input
//feedback
/*
std::cout << "loop: " << counter << "\n";
counter++;

*/
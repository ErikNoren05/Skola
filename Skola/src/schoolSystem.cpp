#include "schoolSystem.h"

void schoolSystem::run()
{
	int input = 0;
	int ålder = 0;
	std::string Class = "";
	std::string typing = "";
	std::string controller = "";
	int counter = 0;
	
	while (true)
	{
		menu();
		std::cin >> input;
		

		

		
		switch (input)
		{
		//lägger till studenter
		case 1:

			
				std::cout << "vad heter hen? \n";
				std::cin >> typing;
				std::transform(typing.begin(), typing.end(), typing.begin(), [](unsigned char c) {return std::tolower(c); });

				std::cout << "how old is hen? \n";
				std::cin >> ålder;
				

				std::cout << "student " << typing << " that is " << ålder << " years old has been added \n";

				addStudent(typing,Class, ålder);
				
				for (auto i : students)
				{
					std::cout << i.name <<" " << "\n";
					std::cout << i.age <<" " << "\n";
				}

				break;
			
		//lägger till klasser
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
			

		//väljer 
		case 3:

			std::cout << "whats the class you want to add a student in? \n";
			std::cin >> Class;
			std::transform(Class.begin(), Class.end(), Class.begin(), [](unsigned char c) {return std::tolower(c); });
			for (auto i : schoolClasses)
			{	

				if(Class == i)
				{
					std::cout << "What the name of the student? \n";
					std::cin >> typing;
					std::transform(typing.begin(), typing.end(), typing.begin(), [](unsigned char c) {return std::tolower(c); });

					for (auto i : students)
					{
						if (typing == i.name) 
						{
							i.Class = Class;
							std::cout << i.name << "\n" << i.Class << "\n" << i.age << "\n";
							std::cout << "Student adda \n \n";
						}
					}
					break;
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

void schoolSystem::addStudent(std::string newName, std::string newClass, int newAge)
{
	Student Student;
	Student.name = newName;
	Student.age = newAge;
	Student.Class = newClass;

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
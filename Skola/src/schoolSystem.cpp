#include "schoolSystem.h"

void schoolSystem::run()
{
	int input = 0;
	int ålder = 0;
	std::string Class = "";
	std::string typing = "";
	std::string holder = "";
	int counter = 0;
	
	while (true)
	{
		menu();
		std::cin >> input;
		

		

		
		switch (input)
		{
		//adds student
		case 1:

			
				std::cout << "whats the students name? \n";
				std::cin >> typing;
				std::transform(typing.begin(), typing.end(), typing.begin(), [](unsigned char c) {return std::tolower(c); });

				std::cout << "how old is hen? \n";
				std::cin >> ålder;
				

				std::cout << "student " << typing << " that is " << ålder << " years old has been added \n";

				addStudent(typing, Class, ålder);
				
				for (auto& i : students)
				{
					std::cout << i.name <<" " << "\n";
					std::cout << i.age <<" " << "\n";
				}

				break;
			
		//adds class
		case 2:

			std::cout << "Whats the name of the class? \n";
				std::cin >> typing;
				std::transform(typing.begin(), typing.end(), typing.begin(), [](unsigned char c) {return std::tolower(c); });

				addclass(typing);
				for (auto& i : schoolClasses)
				{
					std::cout << i << " " << "\n";
				}

			break;
			

		//add students to class
		case 3:

			counter = 0;
			std::cout << "whats the class you want to add a student in? \n";
			std::cin >> Class;
			std::transform(Class.begin(), Class.end(), Class.begin(), [](unsigned char c) {return std::tolower(c); });
			for (auto& i : schoolClasses)
			{

				if (i != Class)
				{
					std::cout << "fel";
					return;
				}

				
			}
			std::cout << "Whats the students name you want to add to " << Class << "\n";
			std::cin >> typing;
			std::transform(typing.begin(), typing.end(), typing.begin(), [](unsigned char c) {return std::tolower(c); });

			for (auto& i : students)
			{
				if (typing == i.name)
				{
					i.Class = Class;
					std::cout << i.name << " are now in " << i.Class << "\n";
				}
				/*if (counter == 1)
				{
					i.Class = Class;
					std::cout << students.name << " has been added to " << i.Class << "\n";
				}  
				ÖVERDRIFT MÅSTE INTE ^^*/
			}			
			break;


			//search for student
		case 4:

			counter = 0;
			std::cout << "what the name of the studnet?\n";
			std::cin >> typing;
			std::transform(typing.begin(), typing.end(), typing.begin(), [](unsigned char c) {return std::tolower(c); });
			for (auto& i : students)
			{
				if (typing == i.name)
				{
					std::cout << i.Class << "\n";
					std::cout << i.name << ", " << i.age << " years old, are in class " << i.Class << "\n";
					counter++;
					continue;
				}
				
			}
			if (counter == 0)
			{
				std::cout << "student does not exist in database \n";
			}
			break;



			//remove student form class
		case 5:
			counter = 0;
			std::cout << "whats the name of the student you want to remove? \n";
			std::cin >> typing;
			std::transform(typing.begin(), typing.end(), typing.begin(), [](unsigned char c) {return std::tolower(c); });
			for (auto& i : students)
			{
				if (typing == i.name)
				{
					std::cout << i.name << " " << i.Class << " " << i.age <<"\n";
					std::cout << "do you want to remove " << i.name << " from " << i.Class << "? Yes/No \n";
					std::cin >> Class;
					std::transform(Class.begin(), Class.end(), Class.begin(), [](unsigned char c) {return std::tolower(c); });
					if (Class == "yes")
					{
						i.Class = "";
						std::cout << "student remove from class \n";
					}
				}

			}
			break;

			//remove student from system
		case 6:
			
			std::cout << "whats the name of the student? \n";
			std::cin >> typing;
			std::transform(typing.begin(), typing.end(), typing.begin(), [](unsigned char c) {return std::tolower(c); });
			for (auto& i : students)
			{
				if (typing == i.name)
				{
					std::cout << "are you sure? Yes/No \n";
					std::cin >> Class;
					std::transform(Class.begin(), Class.end(), Class.begin(), [](unsigned char c) {return std::tolower(c); });
					if (Class == "yes")
					{
						std::cout << "okej, student errased from system \n";
						i.name = "deleted";
						i.age = NULL;
						i.Class = "deleted";
						break;;
					}
					std::cout << "okej, student not errsed \n";
					break;
				}
			}


			break;

			//information about class
		case 7:

			break;

			//avslut
		case 8:
			std::cout << "bye";
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
	std::cout << "what do you want to do? \n" << "1. new student \n" << "2. new class \n" << "3. add student to class \n" << "4. search for student \n" << "5. remove student from class \n" << "6. remove student from system \n" << "7. information about class \n" << "8. exit \n";
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
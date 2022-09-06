#pragma once
#include "Student.h"
#include <vector>
#include <string>
#include <iostream>

class schoolSystem
{
public: 
	void run();
	void addStudent();
	void removeStudent();
	void menu();

	std::vector <Student> students;
	std::vector <std::string> schoolClasses;

};

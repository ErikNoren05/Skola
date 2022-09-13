#pragma once
#include "Student.h"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <cctype>



class schoolSystem
{
public: 
	void run();
	void addStudent(std::string newName, int newAge);
	void addclass(std::string newName);
	void removeStudent();
	void menu();

	//studenterna lista
	std::vector <Student> students;
	//alla klasser lista
	std::vector <std::string> schoolClasses;

};

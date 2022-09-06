#pragma once
#include "Student.h"
#include <vector>
#include <string>
#include <iostream>

class schoolSystem
{
public: 
	void run();
	void addStudent(std::string newName, int newAge);
	void removeStudent();
	void menu();

	//studenterna lista
	std::vector <Student> students;
	//alla klasser lista
	std::vector <std::string> schoolClasses;

};
#include "Student.h"

Student::Student()
{
	grade = 0;
	ID = "";
	gba = 0;
	total_grade = 0;
}

Student::Student(float grade, string ID, float gpa, float total_grade)
{
	this->grade = grade;
	this->ID = ID;
	this->gpa = gpa;
	this->total_grade = total_grade;
}

double Student::getGrade()
{
	return grade;
}

void Student::setGrade(float G)
{
	grade = G;
}

double Student::getID()
{
	return ID;
}

void Student::setID(string id)
{
	ID = id;
}

double Student::getGPA()
{
	return gpa;
}

void Student::setGPA(char g_pa)
{
	gpa = g_pa;
}

double Student::getTotGrade()
{
	return total_grade;
}

void Student::setTotGrade(float total)
{
	total_grade = total;
}

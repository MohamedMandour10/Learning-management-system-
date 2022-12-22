#include "Student.h"

Student::Student()
{
	grade = 0;
	ID = "";
	gba = 0;
	total_grade = 0;
}



double Student::getGrade()
{
	return grade;
}

void Student::setGrade(float G)
{
	grade = G;
}


double Student::getGpa()
{
	return gpa;
}

void Student::setGpa(char g_pa)
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

string Student::getFirstName()
{
	return firstName;
}

void Student::setFirstName(string first_Name)
{
	firstName = first_Name;
}

string Student::getLastName()
{
	return lastName;
}

void Student::setLastName(string last_Name)
{
	lastName = last_Name;
}

string Student::getFullName()
{
	return firstName + lastName;
}

int Student::getAge()
{
	return age;
}

void Student::setAge(int a_ge)
{
	age = a_ge;
}

string Student::getMobile()
{
	return mobile;
}

void Student::setMobile(string m_obile)
{
	mobile = m_obile;
}

string Student::getMail()
{
	return email;
}

void Student::setMail(string e_mail)
{
	email = e_mail
}

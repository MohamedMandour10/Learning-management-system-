#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include "User.h"

class Student :public User
{
protected:
	float grade;

private:
	char gpa;
	float totalGrade;
public:
	//-> Course_Code -> grade
	map<string, int>grades;

	//storing students------search
	static map<string, Student>students;

	//default
	Student();

	//parameterized
	Student(string& fn, string& ln, string& m, string& e, int a
		, float& g, string& i, float& gb, float& tot) : User(fn, ln, m, e, a), grade(g), gpa(gb)
		, totalGrade(tot)
	{}
	double getGrade();
	void setGrade(float G);

	

	double getGpa();
	void setGpa(char g_pa);

	double getTotGrade();
	void setTotGrade(float total);

	string getFirstName();
	void setFirstName(string first_Name);

	string getLastName();
	void   setLastName(string last_Name);

	string getFullName();

	int getAge();
	void setAge(int a_ge);

	string getMobile();
	void setMobile(string m_obile);

	string getMail();
	void setMail(string e_mail);


	void addNew();
};

#endif

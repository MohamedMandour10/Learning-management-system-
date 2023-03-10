#pragma once
#include <string>
class Student
{
	protected:
		float grade;
	private:
		string ID;
		float gpa;
		float total_grade;
	public:
		//default
		Student();
		//parameterized
		Student(float grade,string ID,float gba,float total_grade);

		double getGrade();
		void setGrade(float G);

		double getID();
		void setID(string id);

		double getGPA();
		void setGPA(float g_pa);

		double getTotGrade();
		void setTotGrade(float total);

		void addNew();
};


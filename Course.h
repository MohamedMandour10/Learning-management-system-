#ifndef USER_H
#define USER_H

#include<vector>
#include<utility>
#include<map>
#include<iostream>
#include <ctime>

#include "Professor.h"
#include "Student.h"

using namespace std;

class Course
{
    protected:
        string name;
        string ID;
        vector <Professor> profs;
        map <Student,float> students;
        string lecHall;
        pair <int, int> time;

    public:
        Course(string name,string D,string lecHall,string T);
        void add_profs(vector<Professor> pro);
        void add_students();
        string get_course();
        string get_hall();
        string get_time();
        string gt_ID();
        vector<Professor> get_prof();

        ~Course();

};

#endif

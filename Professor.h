#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "User.h"
#include "Course.h"
#include<vector>
#include <iostream>

class Professor: public User
{
protected:
    string title;

public:
    vector<Course>courses;
    static map<int, Professor>profs;

    Professor(string &fn, string &ln ,string &m,string &e,int a,string &t, string &I)
        : User(fn,ln,m,e,a,I),title(t) {}
    string getFirstName() ;
    string getLastName();
    string getFullName();
    int getAge();
    string getMobile();
    string getMail();
    string getTitle();


};


#endif //BB_PROFESSOR_H

#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "User.h"
#include <iostream>

class Professor: public User
{
protected:
    string title;

public:
    Professor(string &fn, string &ln ,string &m,string &e,int a,string &t): User(fn,ln,m,e,a),title(t) {}

    string getFirstName() ;
    string getLastName();
    string getFullName();
    int getAge();
    string getMobile();
    string getMail();
    string getTitle();


};


#endif //BB_PROFESSOR_H

//
// Created by ahmed on 12/16/2022.
//

#ifndef BB_PROFESSOR_H
#define BB_PROFESSOR_H
#include "User.h"
#include <iostream>

class Professor: public User
{
protected:
    string title;
public:
    Professor(string &fn, string &ln ,string &m,string &e,int a,string &t): 
    User(fn,ln,m,e,a),title(t)
    {}
/*professor():user
{
   title="UNKWON";
}*/
    string getFirstName() ;
     string getLastName();
     int getAge();
     string getMobile();
     string getMail();
     string getTitle();


};


#endif //BB_PROFESSOR_H

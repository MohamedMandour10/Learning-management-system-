//
// Created by ahmed on 12/16/2022.
//

#ifndef BB_USER_H
#define BB_USER_H
#include <iostream>
using namespace std;

class User
{
protected:
    string firstName, lastName, mobile, email; // why did we use char* instead of  using a string
int age;
public:
   User(string &fn, string &ln ,string &m,string &e,int a):firstName(fn),lastName(ln),mobile(m),email(e),age(a)
    {}
    /*
user():firstName("UNKNOWN"),lastName("UNKNOWN"),mobile("###########"),email("UNKNOWN@gmail.com"),age(18)
{}*/
virtual string getFirstName()=0;
virtual string getLastName()=0;
virtual int getAge()=0;
virtual string getMobile()=0;
virtual string getMail()=0;



};


#endif //BB_USER_H

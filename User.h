#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>

using namespace std;

class User{

protected:
    string firstName, lastName, mobile, email;
    int age;

public:
   User(string &fn, string &ln ,string &m,string &e,int &a):firstName(fn),lastName(ln),mobile(m),email(e),age(a) {}
   
   virtual string getFirstName()=0;
   virtual string getLastName()=0;
   virtual string getFullName() = 0;
   virtual int getAge()=0;
   virtual string getMobile()=0;
   virtual string getMail()=0;

};


#endif

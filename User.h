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
   
   virtual string getFirstName()=Null;
   virtual string getLastName()=Null;
   virtual string getFullName() = Null;
   virtual int getAge()=0;
   virtual string getMobile()=Null;
   virtual string getMail()=Null;

};


#endif

#ifndef USER_H
#define USER_H
#include <iostream>
#include <string>

using namespace std;

class User{

protected:
    string ID;
    string firstName, lastName, mobile, email;
    int age;

public:
   User(string &fname, string &lname ,string &mobile,string &email,int &age , string &I):
       firstName(fname),lastName(lname),mobile(mobile),email(email),age(age),ID(I) {}
   
   virtual string getFirstName()=Null;
   virtual string getLastName()=Null;
   virtual string getFullName() = Null;
   virtual int getAge()=0;
   virtual string getMobile()=Null;
   virtual string getMail()=Null;
   virtual string ID() = Null;


};


#endif

#include <iostream>
#include<map>
#include<string>

#include "../admin/Admin.h"

using namespace std;



Admin::Admin(){}

int Admin::hashing(string password){
        hash<string> h;
        return h(password);
    }

bool Admin::checkUsername(string username){
        if(check[username]) return false;
        else return true; 

    }

bool Admin::checkPassword(string password){
    if(password.size() < 8) return false;
    else return true;
} 

void Admin::registerNew(string username, string password, string fullName, string adress, string phoneNumber){
    if(!checkUsername(username)) {
        cout<<"This username is already taken";
        return;
    }
    if(!checkPassword(password)){
        cout<<"Passord should be longer than 8 characters";
        return;
    }
        adress = adress;
        fullName = fullName;
        phoneNumber = phoneNumber;
       password = password;
       username = username;
        check[username] = hashing(password);
    }

    void Admin::loginCheck(string username, string password){
        if(check[username] == hashing(password)) cout<< "Login successful";
            
        else  cout<< "Login failed";

    }

    void Admin::updateTo(string username, string password, string fullName, string adress, string phoneNumber){
        adress = adress;
        fullName = fullName;
        phoneNumber = phoneNumber;
        password = password;
        username = username;
        check[username] = hashing(password);
    }

    Admin::~Admin(){}

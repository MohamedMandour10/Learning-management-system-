#include <iostream>
#include<map>
#include<string>

#include "../admin/Admin.h"
#include "../Database.cpp"

using namespace std;



Admin::Admin(){}

int Admin::hashing(string password){
        hash<string> h;
        return h(password);
    }

bool Admin::checkUsername(string username){
        if(database.userpassword[username]) return false;
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
        database.userpassword[username] = hashing(password);
    }

    void Admin::loginCheck(string username, string password){
        if(database.userpassword[username] == hashing(password)) cout<< "Login successful";
            
        else  cout<< "Login failed";

    }

    void Admin::setAdress(string newAdress){
        adress = newAdress;
    }

    void Admin::setPhoneNumber(string newPhoneNumber){
        phoneNumber = newPhoneNumber;
    }

    void Admin::setFullName(string newFullName){
        fullName = newFullName;
    }

    void Admin::setPassword(string newPassword){
        if(checkPassword(newPassword)) password = newPassword;
        else cout<< "Passord should be longer than 8 characters";
    }

    void Admin::setUsername(string newUsername){
        if(checkUsername(newUsername)) username = newUsername;
        else cout<< "Username is already taken";
    }

    string Admin::getAdress(){
        return adress;
    }

    string Admin::getFullName(){
        return fullName;
    }

    string Admin::getPhoneNumber(){
        return phoneNumber;
    }

    Admin::~Admin(){}

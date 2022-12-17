#include <iostream>
#include<map>
using namespace std;

class Admin
{
private:
    string username;
    string password;
    string fullName;
    string adress;
    string phoneNumber;
    map<string, string> check{{"ahmed", "ahmedpass"}, {"mohamed", "mohamedpass"}};

public:

    Admin(){}

    void registerNew(string username, string password, string fullName, string adress, string phoneNumber){
        adress = adress;
        fullName = fullName;
        phoneNumber = phoneNumber;
       password = password;
       username = username;
        check[username] = password;
    }

    void loginCheck(string username, string password){
        if(check[username] == password) cout<< "Login successful";
            
        else cout<< "Login failed";
    }

    void updateTo(string username, string password, string fullName, string adress, string phoneNumber){
        adress = adress;
        fullName = fullName;
        phoneNumber = phoneNumber;
        password = password;
        username = username;
        check[username] = password;
    }

    
   
    ~Admin(){}
};



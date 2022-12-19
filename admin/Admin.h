#include <iostream>
#include<map>
#include <string>
#include "../Database.cpp"
using namespace std;

class Admin
{
    
private:

    string username;
    string password;
    string fullName;
    string adress;
    string phoneNumber;
    Database database = Database();
    
  

public:

    Admin();

    int hashing(string password);


    bool checkUsername(string username);

    bool checkPassword(string password);

    void registerNew(string username, string password, string fullName, string adress, string phoneNumber);

    void loginCheck(string username, string password);

    void setUsername(string username);

    void setPassword(string password);

    void setFullName(string fullName);

    void setAdress(string adress);

    void setPhoneNumber(string phoneNumber);

    string getFullName();

    string getAdress();

    string getPhoneNumber();

    ~Admin();
};

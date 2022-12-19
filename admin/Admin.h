#include <iostream>
#include<map>
#include <string>
using namespace std;

class Admin
{
    
private:

    string username;
    string password;
    string fullName;
    string adress;
    string phoneNumber;
    
    map<string, int> check{ {"ahmed", hashing("ahmedpass")}, {"mohamed", hashing("mohamedpass")} };

public:

    Admin();
    
    int hashing(string password);


    bool checkUsername(string username);

    bool checkPassword(string password);

    void registerNew(string username, string password, string fullName, string adress, string phoneNumber);

    void loginCheck(string username, string password);

    void updateTo(string username, string password, string fullName, string adress, string phoneNumber);

    ~Admin();
};

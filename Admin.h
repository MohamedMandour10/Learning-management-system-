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
    map<string, string> check{ {"ahmed", "ahmedpass"}, {"mohamed", "mohamedpass"} };

public:

    Admin() {}

    void registerNew(string username, string password, string fullName, string adress, string phoneNumber);

    void loginCheck(string username, string password);

    void updateTo(string username, string password, string fullName, string adress, string phoneNumber);

    ~Admin() {}
};

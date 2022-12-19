#include <iostream>
#include "admin/Admin.cpp"
using namespace std;
int main(int argc, char** argv){
    Admin admin =  Admin();
    admin.registerNew("sayed", "sayedpass", "Mohamed Elsayed", "any", "454654");
    admin.loginCheck("sayed", "sayedpass");
    
}
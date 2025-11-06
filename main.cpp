#include <iostream>
#include <string>
#include "main-cpp.h"
using namespace std;
extern "C" void start() {
string username;
cout << "Enter Username\n";
getline(cin,username);
if (username == "admin") {
    cout << "Welcome Back Admin\n";
}
else{
    cout << "Wrong Username\n";
}
}

// TAKING INPUT OF NAME , AGE AND ADDRESS TO USE GETLINE, CIN AND CIN.IGNORE


#include <iostream>
#include <string>
using namespace std;

int main() {
     int age;
     string name, address;
     
     cout << " please drop your age , name , and address one by one = " << "\n";
     cin >> age;
     cin.ignore();
     getline(cin,name);
     cin.ignore();
     getline(cin,address);

     cout << "Thanks for the information .We have generated custom introduction based on your provide data" << "\n" << " Hello ! My name is " << name << "and i live in " << address << " i am " << age << " years old. thank you !" << "\n";
    return 0;
}

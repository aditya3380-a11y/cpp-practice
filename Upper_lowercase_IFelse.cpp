#include <iostream>
using namespace std;

int main() {
    char ch ;
    cout << " Please input your character here to check it's case= ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z')
    {
        cout << " giveN input of charcter is uppercase =" << ch <<"\n";
    
    }else
    {
        cout << " giveN input of character is lowercase= " << ch << "\n";
    }
    
    return 0;
}
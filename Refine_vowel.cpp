#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Please input your character , you wanted to input = ";
    cin >> ch;


    switch (ch)
    {
     case 'a':
     case 'e':
     case 'o':
     case 'i':
     case 'u':
     case 'A':
     case 'E':
     case 'I':
     case 'O':
     case 'U':
          cout << "Your input is vowel =" << ch << "\n";
        break;
    
    default:
        cout << " Your input is consonaunt = " << ch << "\n";
        break;
    }
    return 0;
}
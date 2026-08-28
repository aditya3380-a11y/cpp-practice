#include <iostream>
using namespace std;

int main() {
    char ch ;
    cout << "Please input your character = ";
    cin >> ch;

    if (ch =='a'||ch =='A',ch =='e'||ch =='E',ch =='I'||ch =='i',ch =='O'||ch =='o',ch =='U'||ch =='u' )
    {
        cout << "Given input is vowel = " << ch << "\n";
    }else
    {
        cout << " Given input is consonaunt = " << ch << "\n";
    }
    

    return 0;
}
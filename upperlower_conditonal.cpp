#include <iostream>
using namespace std;

int main() {
    char ch ;
    cout << "Please input your character here = ";
    cin >> ch;
    cout << ((ch>= 'A' && ch <= 'Z')? "It's uppercase character \n" : " it's lowercase character \n");
    return 0;
}
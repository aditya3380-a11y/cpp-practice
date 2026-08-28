#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Please input your age to check you eligibilty for voting = ";
    cin >> age;

    cout << ((age >= 18) ? "Valid voter \n": "invalid voter \n");
    return 0;
}
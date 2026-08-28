#include <iostream>
using namespace std;

int main() {
    int num;
    cout << " Please input your number here = ";
    cin >> num;

    cout<< ((num%5 ==0)? " Yes , it's divisible by 5 \n" : "No it's not divisible by 5 \n");
    return 0;
}
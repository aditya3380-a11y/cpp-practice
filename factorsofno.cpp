#include <iostream>
using namespace std;

int main() {
    int n,fact;
    fact=0;
    cout << "Please input your number = ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
    
       cout << i << "\n";
       fact = fact+ (n%i==0 );
    }
    cout << " total no. of factors of given number is = " << fact << "\n";
    
    return 0;
}
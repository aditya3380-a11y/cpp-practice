#include <iostream>
using namespace std;

int main() {
    int a ;
    cout << " please provide your  integer to identify them as +,- and 0 = " << "\n";
    cin >> a;

    if (a > 0){
        cout << "the give no. is positive = " << a << "\n";
    }else if (a < 0){
        cout << " the given no. is negative = " << a << "\n";
    }else
    {
        cout << " the give no. is zero = " << a << "\n";
    }
    
    
    
    return 0;
}
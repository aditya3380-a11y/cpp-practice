// SWAPPING VALUE OF TWO NUMBERS TAKEN AS INPUT  FROM USER/

#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cout << " Please input value of two number =";
    cin >> a >> b ;

    cout << " given input saved in two variables , first is  a = " << a << " and second is b=" << b  << "\n";

    c = a;
    a = b;
    b = c;
    
    cout << "Thanks for input , numbers are swapped " << "\n" << " a  = "  << a << " and b is = " << b << "\n";
    return 0;
}
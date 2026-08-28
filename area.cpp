#include <iostream>
using namespace std;

int main() {
    float l, b ;
    cout << "Hello! welcome to rectangle area solver and perimeter solver.Please drop your value of length and breadth=";
    cin >> l >> b ;

    float area , perimeter;
    area= (l*b);
    perimeter = (2*(l+b));
    cout << " area ="<< area << " and perimeter is " << perimeter << "\n";
    return 0;
}
// just some pratice

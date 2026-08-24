// TAKING INPUT OF RADIUS OF CIRCLE  AND PROVIDE AREA , PERIMETER OF THAT CIRCLE AS OUTPUT.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r, area, peri ;
    
    cout << "Please provide the radius of circle = ";
    cin >> r;

    peri = 2*3.14159265358979323846*r;
    area = 3.14159265358979323846*r*r;

    cout << " Thanks for the radiuss. your area = " << area << "and perimeter is  = " << peri << "\n";
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double c , F ;
    cout << "Please value of celsius, you wanted to convert into farhennite = " ;
    cin >> c;

    F = (double(c * 9/5)+32);
    cout << " here is farhennite temp , you need = " << F << "\n";


    return 0;
}
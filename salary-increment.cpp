// TAKING SALARY AS INPUT AND INCREASE IT BY 5000 USING ASSIGNMENT OPERATOR.


#include <iostream>
using namespace std;

int main() {
    int salary, increment;
    increment = 5000;
    cout << " Please input your salary and get increment = ";
    cin >> salary ;


    increment += salary;
    cout << "Congrats ! we have increased your salary by 5000 so your new salary is = " << increment << "\n";
    return 0; 
}

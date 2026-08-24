// TAKING INPUT FROM USERS OF 3 NUMBER AND PRINTING THEIR SUM AND AVERAGE.


#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cout << "Please Input numbers here =" << "\n";
    cin >> a >> b >> c ;
     
    double sum , avg ;
     sum = (a + b + c);
     avg =  (double(a + b + c)/3);

    cout << "Here is your sum of three numbers  = " <<  sum << "\n" << " and average of it = "  << avg << "\n" ;
    return 0;
}
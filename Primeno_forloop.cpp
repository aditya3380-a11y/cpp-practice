#include <iostream>
using namespace std;

int main() {
     int n,fact;
    fact=0;
    cout << "Please input your number = ";
    cin >> n;

    for (int i = 1; i <=n; i++){ 
       cout << i << "\n";
       fact = fact+ (n%i==0 );
       
       
    }
    cout << " total no. of factors of given number is = " << fact << "\n";
     if (fact ==2)
       {
        cout<< " prime number" << "\n";
       }else
       {
        cout << " not a prime no" << "\n";
       }
    return 0;
}
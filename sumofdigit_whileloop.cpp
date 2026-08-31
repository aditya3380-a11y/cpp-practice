#include <iostream>
using namespace std;

int main() {
    int n , sum=0;
    cout << " Please input your number here = ";
    cin >>  n;

    while (n>0)
    { int lastdigit= n%10;
      sum += lastdigit;
      n=n/10;
    //   cout << sum << "\n";
        
    }
     cout << sum << "\n";
    
    return 0;
}
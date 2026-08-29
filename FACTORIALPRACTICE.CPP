#include <iostream>
using namespace std;

int main() {
    int N , f ;
    f=1;
    cout << " Please input your number = ";
    cin >> N;

    for (int i = N ; i >= 1 ; i= (i-1))
    {
       f = (f*i);
       cout << i << "\n";
    }
    cout << " factorial of your input number is= " << f << "\n";
    return 0;
}
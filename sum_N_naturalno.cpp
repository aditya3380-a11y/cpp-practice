#include <iostream>
#include <string>

using namespace std;

int main() {
    int num, sum;
    sum = 0;
    cout << "Please input your number= ";
    cin >> num;

    for (int i = 1; i <=num; i++)
    {
       sum = sum+i;
    //    cout << "sum of first N natural number is = " << sum << "\n";
    }
       cout << "sum of first N natural number is = " << sum << "\n";

    
    return 0;
}
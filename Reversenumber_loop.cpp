#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "please input your number = ";
    cin >> num;
    
  for (int i = num; i >=1 ; i= (i-1))
    {
        cout << i << "\n";
    }
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Please enter your number here= ";
    cin >> n;

    for (int i = 1; i <=n ; i++){
        if (n%i==0)
        {
            cout << i << "\n";
        }
         
    }
    
    return 0;
}
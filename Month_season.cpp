#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Please input your month number to know which season it is =";
    cin >> num;

    switch (num)
    {
     case 1:
     case 2:
     case 12:
        cout << " these months have winter  season "<< "\n";
        break;
    
     case 7:
     case 8:
     case 9:
        cout << " these months have Monsoon  season "<< "\n";
        break;
    
     case 3:
     case 4:
        cout << " these months have spring  season "<< "\n";
        break;
    
     case 5:
     case 6:
        cout << " these months have summer  season "<< "\n";
        break;
    
     case 10:
     case 11:
        cout << " these months have autumn  season "<< "\n";
        break;
    
    default:
         cout << " Invalid input  " << "\n";
        break;
    }
    return 0;
}
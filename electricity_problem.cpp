#include <iostream>
using namespace std;

int main() {
    double unit , bill ;
    cout << " Please input amount of units you have used = ";
    cin >> unit;

    if (unit > 400 ) {
      bill += ((unit-400)*13);
      unit = 400;
    }
    if (unit >= 201 && unit <= 400 ){
        bill += ((unit-200)*8);
        unit = 200;
    }
    if (unit >= 101 && unit <= 200){ 
        bill += ((unit-100)*6);
        unit = 100;
    }
    if (unit>= 0 && unit <= 100){
        bill += (unit*4.2);
    }
    
    cout << " so your current bill to pay is = " << bill << "\n";
    return 0;
        
}

   

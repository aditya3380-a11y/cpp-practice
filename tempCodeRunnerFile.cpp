#include <iostream>
using namespace std;

int main() {
    int Year;
    cout << "Please Provide a year to check whether it's leap year or not = ";
    cin >> Year;

  if (Year%100==0){
    if (Year%400==0)
     {
      cout << " leap year =" << Year<< "\n";
     }else 
     cout << " not a leap year="<< Year<< "\n";
   }
  else if (Year%4==0)
  { cout << " LEAP YEAR = " << Year << "\n";

  }else
  {
    cout << " not a leap year = "<< Year << "\n";
  }
  
    return 0;
}

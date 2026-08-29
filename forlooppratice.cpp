#include <iostream>
using namespace std;

int main() {
   int n, fact;
   fact=0;
   cout << "Please input your number here = ";
   cin >> n;

   for (int i = n; i >= 1; i = (i-1))
   {
     fact= fact + (n%i==0);
     } 
     cout << "Given number has total number of factors are =" << fact << "\n";

     if (fact == 2 )
     {
       cout << " Given input number has only two factors that's why it's a prime number " ;   
      
     }else
     {
      cout << "not a prime number";
     }
     
     

   
   return 0;
}
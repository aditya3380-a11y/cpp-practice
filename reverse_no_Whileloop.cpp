// #include <iostream>
// using namespace std;

// int main() {
//     int n , digit= 0;
//     cout << " Please input your number you wanted to reverese = ";
//     cin >> n;
//     // int reverse = 0;
    
//     // condition 
//     while (n> 0)  { 
//       int reverse = 0;
//       digit = n%10 ;
//       reverse = (reverse*10 + digit) ;
//       n = n/10;
//       cout << reverse << "\n";
//     }
//     // cout << reverse << "\n";
//     return 0;
// }


// Again praciticing this code

#include <iostream>
using namespace std;

int main() {
    int n , digit =0 ;
    cout << " Please input your number to reverse = ";
    cin >> n;

    while (n>0){
        int reverse = 0 ;
        // Gives the last digit of number
        digit = n%10 ;
        // save number into reverse while shifiting the next number coming to that variable.
        reverse = reverse*10 + digit;
        // removing the number , which we already saved in our varible .
        n=n/10;
        cout << reverse << "\n";
    }
    
    return 0;
}
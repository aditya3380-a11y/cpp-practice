#include <iostream>
using namespace std;

int main() {
    int bill, discount;
    cout << "Please drop your bill amount, if you are eligible we will give you discount based on your bill amount =" ;
    cin >> bill;

    if (bill >= 0 && bill <= 5000)
    {
        cout << " Oh! sorry you're not eligible for any discout. your final amount of bill is = " << bill << "\n";

    }else if (bill >= 5001 && bill <= 7000)
    {
        discount = (bill*0.05);
        bill += discount ;
        cout << " Congrats!! you're eligible for 5 percent discount, your current bill to pay is after discount =" << bill << "\n";
    }else if (bill >= 7001 && bill <= 9000)
    {
        discount = (bill*0.10);
        bill += discount;
        cout << " Congrats!! you're eligible for 10 percent discount, your current bill to pay is after discount =" << bill << "\n";
    }else
    {
        discount = (bill*0.20);
        bill += discount;
        cout << " Congrats!! you're eligible for 20 percent discount, your current bill to pay is after discount =" << bill << "\n";


    }
    
    
    
    return 0;
}
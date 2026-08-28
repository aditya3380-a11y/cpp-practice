// We can refine this code more by stacking cases one by one and then cout the original output we need in our program. 
// So here , i'll solve this question with stacking cases on each other and let's see what happens



#include <iostream>
#include <string>

using namespace std;

int main() {
    char ch ;
    cout << "please input your character here = " ;
    cin  >> ch;
    cout << " given value of chracter is = " << ch << "\n" ;


    switch (ch)
    {
    case 'a':{
        cout << "Your current input character is vowel = " << ch << "\n" ;
                      break;
    }
    case 'e':{
         cout << "Your current input character is vowel = " << ch << "\n" ;
                      break;
    }
    case 'i':{
         cout << "Your current input character is vowel = " << ch << "\n" ;
                      break;
    }
    case 'o':{
         cout << "Your current input character is vowel = " << ch << "\n" ;
                      break;
    }
    
    case 'u':{
         cout << "Your current input character is vowel = " << ch << "\n" ;
                      break;
    }
    case 'A':{
         cout << "Your current input character is vowel = " << ch << "\n" ;
                      break;
    }
    case 'E':{
         cout << "Your current input character is vowel = " << ch << "\n" ;
                      break;
    }
    case 'I':{
         cout << "Your current input character is vowel = " << ch << "\n" ;
                      break;
    }
    case 'O':{
         cout << "Your current input character is vowel = " << ch << "\n" ;
                      break;
    }
    
    case 'U':{
         cout << "Your current input character is vowel = " << ch << "\n" ;
                      break;
    }

    default:
         cout << " the given input not a vowel, it's consonaunt = " << ch << "\n";
                      break;
    }
    
    return 0;
}
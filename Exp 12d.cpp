
//sneha diwan
//23070123126
//entc-B2
//experiment-12
//parameterized constructor
#include<iostream>
using namespace std;
// Defining parameterized constructor
class Num {
    // int a=7, b=9;
public:
    Num(int c, int d) {
        if (c > d) {
            cout << c << " is greater"<<endl;
        } else {
            cout << d << " is greater"<<endl;
        }
    }
};

int main() {
    Num n1(4, 3);
}
/*
Output 
 
4 is greater

=== Code Execution Successful ===


*/

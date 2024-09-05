
//sneha diwan
//23070123126
//entc-B2
//experiment-12
// Default Constructors
#include<iostream>
#include<string>
using namespace std;

class Data {
    string name;
    int roll_no;
    char dept[50];
    int batch;

public:
    Data() {
        cout << "Name: ";
        cin >> name;
        cout << "Roll Number: ";
        cin >> roll_no;
        cout << "Department: ";
        cin >> dept;
        cout << "Batch: ";
        cin >> batch;
    }

    void display() {
        cout << endl << "DETAILS:" << endl << name << " " << roll_no << " " << dept << " " << batch << endl;
    }
};

int main() {
    Data d1;
    d1.display();
}
/*
Output 
 
Name: sneha
Roll Number: 126
Department: entc
Batch: 2023-27

DETAILS:
sneha 126 entc 2023
=== Code Execution Successful ===


*/

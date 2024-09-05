
//sneha diwan
//23070123126
//entc-B2
//experiment-12
//parameterized constructor
#include<iostream>
#include<string.h>
using namespace std;

class student {
    int rno;
    char name[50];
    double fee;

public:
    student(int, char[], double);
    student(student &t) // copy constructor
    {
        rno = t.rno;
        strcpy(name, t.name);
        fee = t.fee;
    }
    void display();
};

student::student(int no, char n[], double f) {
    rno = no;
    strcpy(name, n);
    fee = f;
}

void student::display() {
    cout << endl << rno << "\t" << name << "\t" << fee << endl;
}

int main() {
    student s(126, "sneha", 999999); // Changed 132 to 126 and "subham" to "sneha"
    s.display();

    student sneha(s); // Copy constructor called and "subham" replaced with "sneha"
    sneha.display();

    return 0;
}

/*
Output 
 
/tmp/b4rA16bLiD.cpp: In function 'int main()':
/tmp/b4rA16bLiD.cpp:32:20: warning: ISO C++ forbids converting a string constant to 'char*' [-Wwrite-strings]
   32 |     student s(126, "sneha", 999999);
      |                    ^~~~~~~
/tmp/b4rA16bLiD.o

126	sneha	999999

126	sneha	999999
=== Code Execution Successful ===


*/

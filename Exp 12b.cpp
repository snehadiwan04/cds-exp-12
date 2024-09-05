
//sneha diwan
//23070123126
//entc-B2
//experiment-12
#include <iostream>
using namespace std;
//defining the constructor outside the class
class student
{
    int rn;
    char name[50];
    float fee;
    public:
    student();
    void display();
};
student::student()
{
    cout<<"Enter the name: ";
    cin>>name;
    cout<<"Enter the roll no.: ";
    cin>>rn;
    cout<<"Enter the fee: ";
    cin>>fee;
}
void student::display()
{
    cout<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll No: "<<rn<<endl;
    cout<<"Fee: "<<fee<<endl;
}
int main()
{
    student s1;
    s1.display();
}
/*
Output 
 
Enter the name: sneha
Enter the roll no.: 126
Enter the fee: 5004

Name: sneha
Roll No: 126
Fee: 5004

=== Code Execution Successful ===


*/

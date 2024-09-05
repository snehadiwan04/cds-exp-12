//sneha diwan
//23070123126
//entc-B2
//experiment-12
// defining constructor inside the class
#include <iostream>
using namespace std;
class student
{
    int rollno;
    char name[50];
    double fee;
    public:
    student()
    {
        cout<<"Enter the roll number : ";
        cin>>rollno;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the fee: ";
        cin>>fee;
    }
    void display()
    {
        cout<<endl<<rollno<<"\t"<<name<<"\t"<<fee<<endl;
    }
};

int main(){
    student s;
    s.display();
    return 0;
}
/*
Output 
 
Enter the roll number : 126
Enter the name: sneha
Enter the fee: 150000

126	sneha	150000


=== Code Execution Successful ===


*/

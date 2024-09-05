# Experiment 12

## Aim :
To study and implement Constructors and Destructors 

## Software :
Vs code

## Theory :

### Constructors :
Constructors are unique member functions of a class that are automatically called when an object is created.<br> The object’s data members are initialized. Resources may also be allocated when required.

There are some key points about constructors which are: 
- The name of the constructor is the same as its class name. 
- Constructors do not have a return type. 
- Constructors are mostly declared in the public section of the class. 
- Multiple constructors can be defined with different parameters, which is known as overloading.
There are mainly 3 types of constructors.
They are: 

### Default Constructor:
A constructor which takes no arguments. It is also called a zero-argument constructor as it has no parameters. 

### Parameterized Constructor:
A constructor that takes parameters, allowing the object to be initialized with specific values.

### Copy Constructor:
A constructor that initializes an object using another object of the same class. It is used for deep copying and when passing objects by value. 
<br>

### Deconstructors - 
A destructor is also a special member function like a constructor.
- Destructor destroys the class objects created by the constructor.
- Destructor has the same name as their class name preceded by a tilde (~) symbol.
- It is not possible to define more than one destructor.
- The destructor is only one way to destroy the object created by the constructor. 
- Destructor neither requires any argument nor returns any value.
-  It is automatically called when an object goes out of scope.
-  Destructor releases memory space occupied by the objects created by the constructor.

## Codes :
### 1.
```
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
```

### 2.
```
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
```

### 3.
```
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
```

### 4.
```
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
```

### 5.
```
//sneha diwan
//23070123126
//entc-B2
//experiment-12
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
    cout << endl << rno << "\t" << name << "\t" << fee<<endl;
}

int main() {
    student s(132, "subham", 999999);
    s.display();

    student subham(s); // copy constructor called
    subham.display();

    return 0;
}
```

### 6.
```
//sneha diwan
//23070123126
//entc-B2
//experiment-12
#include<iostream>
using namespace std;
int count = 0;
class destruct {
public:
    destruct() {
        ::count++;
        cout << "No. of objects created: " << ::count << endl;
    }

    ~destruct() {
        ::count--;
        cout << "No. of objects destroyed: " << ::count << endl;
    }
};

int main() {
    destruct aa, bb, cc;
    {
        destruct dd;
    }
    return 0;
}
```

## Outputs :
### 1.
![Screenshot 2024-09-05 213741](https://github.com/user-attachments/assets/7c776418-cdb4-49ed-a4fa-f0699b594c93)
### 2.
![Screenshot 2024-09-05 214820](https://github.com/user-attachments/assets/34a22188-8c17-44f7-8fd4-1c58a5a0e931)
### 3.

![Screenshot 2024-09-05 215235](https://github.com/user-attachments/assets/45e06044-a917-47f7-a80c-244c77186e30)
### 4.
![Screenshot 2024-09-05 220543](https://github.com/user-attachments/assets/853b4ea5-0822-49aa-9d8a-25f151008d60)

### 5. 

### 6.

## Conclusion :
-  We learned about constructors and deconstructors in C++. 
-  We learned the use case of each of them in C++.  

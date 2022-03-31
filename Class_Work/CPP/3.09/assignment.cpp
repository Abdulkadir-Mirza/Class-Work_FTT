//Abdulkadir Mirza --- C++ program to access member functions of parent class
//using pointer of derived class.
#include<iostream>
using namespace std;

class student{
    int marks;
    char name[10];
    public:
    int rollno;
    void getdata(){
        cout << "Enter rollno:" << endl;
        cin >> rollno;
        cout << "Enter name:" << endl;
        cin >> name;
        cout << "Enter marks:" << endl;
        cin >> marks;
    }
    void printdata(){
        cout << "Roll No: " << rollno << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

class A : public student{

};

//MAIN
int main(){
    A d1;
    A *ptr;
    ptr=&d1;
    ptr->getdata();
    ptr->printdata();
    return 0;
}
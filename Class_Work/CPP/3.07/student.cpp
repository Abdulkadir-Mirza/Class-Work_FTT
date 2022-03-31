#include<iostream>
#include<cstring>
using namespace std;

class student{
    public:
    int roll_no;
    char name[10];
    void set(){
        cout << "Enter Roll No:" << endl;
        cin >> roll_no;
        cout << "Enter name:" << endl;
        cin >> name;
    }
};

class test{
    public:
    int marks[5];
    void setmarks(){
    for(int i=0;i<5;i++){
        cout << "Enter the marks for subject " << i+1 << endl;
        cin >> marks[i];
    }
    }
};

class result : public test, public student{
    public:
    int totalmarks=0;
    float percentage;
    void display(){
    for(int i=0;i<5;i++){
        totalmarks=totalmarks+marks[i];
    }
    percentage=totalmarks/5;
    cout << "Name: " << name << endl;
    cout << "Roll No: " << roll_no << endl;
    cout << "Total Marks: " << totalmarks << endl;
    cout << "Percentage: " << percentage << endl;
}
};

int main(){
    result d1;
    d1.set();
    d1.setmarks();
    d1.display();
    return 0;
}
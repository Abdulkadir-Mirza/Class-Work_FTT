//Abdulkadir Mirza --- C++ program to use operator overloading with a friend function

#include<iostream>
using namespace std;

//Class
class complex{
    int real,img;
    public:
    complex(){//default constructor
        real=0;
        img=0;
    }
    complex(int x,int y){//parameterized constructor
        real=x;
        img=y;
    }

    void display(){
            cout << "The value of real part " <<real <<  " and imaginary part is " << img <<endl;
    }
    friend complex operator+(complex ob1,complex ob2);
    friend complex operator-(complex ob1,complex ob2);
    friend complex operator*(complex ob1,complex ob2);
    friend complex operator/(complex ob1,complex ob2);
};
complex operator+ (complex ob1,complex ob2){
        complex temp;
        temp.real=ob1.real + ob2.real;//error here
        temp.img=ob1.img + ob2.img;//error here
        return temp;
    }
complex operator- (complex ob1,complex ob2){
        complex temp;
        temp.real=ob1.real + ob2.real;//error here
        temp.img=ob1.img + ob2.img;//error here
        return temp;
    }
complex operator* (complex ob1,complex ob2){
        complex temp;
        temp.real=ob1.real + ob2.real;//error here
        temp.img=ob1.img + ob2.img;//error here
        return temp;
    }
complex operator/ (complex ob1,complex ob2){
        complex temp;
        temp.real=ob1.real + ob2.real;//error here
        temp.img=ob1.img + ob2.img;//error here
        return temp;
    }

int main(){
    complex c1,c2(10,10),c4(1,3);
    complex c5;
    complex c3(2,2);
    c1.display();
    c2.display();
    c3.display();
    c4.display();
    c5.display();
    cout << "The action starts here:" << endl;
    cout << "Addition:" << endl;
    c5=c1+c2;
    c5.display();
    c5=c1+c2+c3+c4;
    c5.display();
    cout << "Subtraction:" << endl;
    c5=c2-c4;
    c5.display();
    cout << "Multiplication:" << endl;
    c5=c3*c2;
    c5.display();
    cout << "Division:" << endl;
    c5=c2/c3;
    c5.display();
}
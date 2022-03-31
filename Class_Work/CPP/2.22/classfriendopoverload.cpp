//Abdulkadir Mirza --- C++ program to see operator overloading with two friend classes

#include<iostream>
using namespace std;
class demo1;
class demo{
    int x,y;
    public:
    demo(){
        x=0;
        y=0;
    }
    demo(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout <<"Demo fields:"<< x << "   " << y << endl;
    }
    friend demo operator+ (demo ob1,demo1 ob2);

};

class demo1{
    int p,q;
    public:
    
    demo1(){
        p=0;
        q=0;
    }
    demo1(int a,int b){
        p=a;
        q=b;
    }
    void display(){
        cout << "Demo1 fields:"  << p << "   " << q << endl;
    }
    friend demo operator+(demo ob1,demo1 ob2);
};

demo operator+ (demo ob1,demo1 ob2){
        demo temp;
        temp.x=ob1.x + ob2.p;//error here
        temp.y=ob1.y + ob2.q;//error here
        return temp;
    }


//MAIN
int main(){
    demo ob1(2,3);
    demo1 ob2(4,5);
    demo ob3;
    ob3=ob1+ob2;
    ob1.display();
    ob2.display();
    ob3.display();
    
}
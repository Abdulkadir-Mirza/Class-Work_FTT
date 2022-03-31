//Nested class Properties
#include<iostream>
using namespace std;

class base{
    int i;
    void display1(){
        cout << "Display base private" << endl;
    }
    public:
    int j;
    static int a;
    void display2(){
        cout << "Display base public" << endl;
    }
    static void display(){
        cout << "Base Class" << endl;
    }

    class base1{
        int x;
        void display3(){
            /*display1();
            display2();
            cout << i << " , " << j << endl;
            We cannot access the member functions or variables of the class
            in which the class is nested
            */
            cout << "Display nested class private" << endl;
            display();//We can access the functions of the main class which are static
            //in the nested class
            }
        public:
        int y;
        void display4(){
            //display1();
            //display2();
            //int m = base::j;//a nonstatic member reference must 
            //be relative to a specific object
            //We cannot access member variables of main class in the 
            //nested class with scope resolution also.
            //cout << a; Undefined reference error.
            cout << "Display nested class public" << endl;
            }     
    };  
};

class derived : public base{
    public:
    void show(){
        display2();//Normal derivation of public member function of base class
        //base::display4();We cannot access member functions and member variables
        // of nested class in the derived class
        //cout << x;
    }
};

class derived1 : public base::base1//Making a child class of nested class
//using scope resolution.
{
    public:
    void show(){
        //Here we can access the public member functions of the parent class that is nested
        //i.e. base1 since we are inheriting from it.
        display4();
    }
};

int main(){
    //base1 obj; directly object of nested class is not possible
    base::base1 ob;//we must do scope resolution to make object.
    ob.display4();//we can access members of nested class using an object made using
    //scope resolution.
    base obj;
    
    return 0;
}
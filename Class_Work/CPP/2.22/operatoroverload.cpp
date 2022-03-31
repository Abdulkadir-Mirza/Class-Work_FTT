//Abdulkadir Mirza --- C++ program to see operator overloading

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
    complex(int x,int y)//parameterized constructor
    {
        real=x;
        img=y;
    }

    void display(){
            cout << "The value of real part " <<real <<  " and imaginary part is " << img <<endl;
    }

    //Defining operator overloading functions.
    complex operator+ (complex ob)//Addition Operator
    {
        complex temp;
        temp.real=real + ob.real;
        temp.img=img + ob.img;
        return temp;
    }
    complex operator- (complex ob)//Subtraction Operator
    {
        complex temp;
        temp.real=real - ob.real;
        temp.img=img - ob.img;
        return temp;
    }
    complex operator* (complex ob)//Multiplication Operator
    {
        complex temp;
        temp.real=real * ob.real;
        temp.img=img * ob.img;
        return temp;
    }
    complex operator/ (complex ob)//Division Operator
    {
        complex temp;
        temp.real=real / ob.real;
        temp.img=img / ob.img;
        return temp;
    }
    complex operator% (complex ob)//Modulo Operator
    {
        complex temp;
        temp.real=real % ob.real;
        temp.img=img % ob.img;
        return temp;
    }

    void operator= (complex temp)//Assignment Operator
    {

        real=temp.real;
        img=temp.real;
    }

    complex operator- ()//Negation operator
    {
        complex temp;
        temp.real=-real;
        temp.img=-img;
        return temp;
    }

    bool operator< (complex ob)//Less than
    {
        if(real<ob.real)
        return true;
        else if(real==ob.real && img < ob.img)
        return true;
        else
        return false;
    }
    bool operator> (complex ob)//Greater than
    {
        if(real>ob.real)
        return true;
        else if(real==ob.real && img > ob.img)
        return true;
        else
        return false;
    }  

    complex operator++ (int)//Increment
    {
        complex temp;
        temp.real=real+1;
        temp.img=img+1;;
        return temp;
    }
    complex operator-- (int)//Decrement
    {
        complex temp;
        temp.real=real-1;
        temp.img=img-1;;
        return temp;
    }

};//end of complex class

//MAIN
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
    cout << "Remainder:" << endl;
    c5=c2%c4;
    c5.display();
    cout << "Assignment:" << endl;
    c5=c3;
    c5.display();
    cout << "Negation:" << endl;
    c5=-c3;
    c5.display();
    int x;
    cout << "============Relational Operators==================" << endl;
    x=c3<c2;
    cout << "Less than returns:" << x << endl;
    x=c3>c2;
    cout << "Greater than returns:" << x << endl;
    cout << "============++ or --==================" << endl;
    complex c6=c1++;
    c6.display();
    c6=c2--;
    c6.display();
    return 0;
}
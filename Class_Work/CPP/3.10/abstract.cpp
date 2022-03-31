//Abdulkadir Mirza --- C++ program that uses virtual functionality
//Converts litres to gallons and fahrenheit to celcius.
#include<iostream>
using namespace std;

class convert{
    protected:
    double val1;
    double val2;
    public:
    convert(double i){
        val1=i;
    }
    double getconv(){
        return val2;
    }
    double getinit(){
        return val1;
    }
    virtual void compute() = 0;
};


class I_to_g : public convert{
    public:
    I_to_g(double i) : convert(i){}
    void compute(){
        val2=val1/3.7854;
    }
    
};

class f_to_c : public convert{
    public:
    f_to_c(double i) : convert(i){}
    void compute(){
        val2=(val1-32)/1.8;
    }
    
};

//MAIN
int main(){
    convert *p;
    I_to_g lglob(4);
    f_to_c fglob(70);
    p=&lglob;
    cout << p->getinit() << " litres is ";
    p->compute();
    cout << p->getconv() << " gallons\n" ;
    p=&fglob;
    cout << p->getinit() << " in fahrenheit is ";
    p->compute();
    cout << p->getconv() << " celcius\n" ;
return 0;
}

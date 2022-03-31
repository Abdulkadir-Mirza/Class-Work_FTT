//Abdulkadir Mirza --- C++ program to check for multilevel inheritance with
//different access specifiers
//Errors for different accessing ways, Error code
#include<iostream>
using namespace std;

class base{
    protected:
    int i,j;
    public:
    void set(int a,int b){
        i=a;
        j=b;
    }
    void show(){
        cout << i << " , " << j << endl;
    }

};

//Now all elements of base are private in derived1.
class derived1 : private base{

    int k;
    void setk(){ k=i*j; }//this is illegal bcoz i and j are private to derived1
    void showk(){
        cout << k << endl;
    }
};

class derived2 : public derived1{
    int m;
    public:

    void setm(){ m=i-j };
    void showm() { cout << m << endl; }
};

int main(){
    derived1 ob1;
    derived2 ob2;
    ob1.set(1,2);
    ob1.show();
    ob2.setk();
    ob2.showk();
    ob2.set(3,4);
    ob2.show();
    return 0;
}
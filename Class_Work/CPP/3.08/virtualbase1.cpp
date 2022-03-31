#include<iostream>
using namespace std;


class A{
    public:
    int i;
};

class B: virtual public A{
    public:
    int j;
};

class C: virtual public A{
    public:
    int k;
};

class D: public B,public C{
    public:
    int sum;
};

int main(){
    D ob;
    ob.i=10;
    ob.j=20;
    ob.k=30;
    ob.sum=ob.i+ob.j+ob.k;
    cout << ob.sum << endl;
    return 0;
}
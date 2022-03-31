//We should always use try and catch in constructor to avoid comlexity
#include<iostream>
using namespace std;

class Base{
    public:

    int i,a;
    Base(){
        i=10;
        //x='a';
        a=0;
        if(a==0)
        throw a;
    }
};


int main(){
    try{
        Base b1;
        cout << b1.i;
    }
    catch(int i){
        cout << "A is 0" << endl;
    }
    //cout << b1.a;
    Base b2;
    cout << b2.a;
}
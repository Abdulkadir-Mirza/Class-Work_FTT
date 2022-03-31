//Abdulkadir Mirza --- Templates in C++
//Function Template Specialization
#include<iostream>
using namespace std;

template<class X>
void swapp(X &a, X &b){
    X temp;
    temp=a;
    a=b;
    b=temp;
    cout << "Inside template swap\n";
}

void swapp(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout << "Inside Specialization\n";
}

int main(){
    int a=10,b=20;
    double x=11.5,y=12.5;
    swapp(a,b);//Calls Explicit Swap
    swapp(x,y);//Calls Generic Swap
    return 0;
}
//Abdulkadir Mirza --- C++ Function Overlading
//C++ supports defining various functions with the same name but different 
//argument type or different number of arguments.
#include<iostream>
using namespace std;


//Various functions having different runtime calls
int add(int a,int b){
    return a+b;
}

int add(int a,int b, int c){
    return a+b+c;
}

int add(int a,int b,int c, int d){
    return a+b+c+d;
}

int add(int a,int b,int c,int d, int e){
    return a+b+c+d+e;
}

double add(double x,int y){
    return x+y;
}

double add(int x,double y){
    return x+y;
}

//MAIN
int main(){
    cout << "Sum is: " << add(1,2) << endl;
    cout << "Sum is: " << add(1,2,3) << endl;
    cout << "Sum is: " << add(1,2,3,4) << endl;
    cout << "Sum is: " << add(1,2,3,4,5) << endl;
    cout << "Sum is: " << add(1.6,2) << endl;
    cout << "Sum is: " << add(1,2.9) << endl;
    return 0;
}
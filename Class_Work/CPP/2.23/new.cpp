// Abdulkadir Mirza --- C++ Program that uses new to create memory storage dynamically.
#include<iostream>
using namespace std;

//MAIN
int main(){
    float *pt = new float;
    *pt=55;
    cout  << "Value= " << *pt << endl;
    cout  << "Address= " << pt << endl;
    cout  << "Size= " <<sizeof(*pt) << endl;
    cout  << "Size ptr= " << sizeof(pt) << endl;
    cout  << "Address ptr= " << &pt << endl;
    return 0;
}
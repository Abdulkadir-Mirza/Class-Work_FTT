//Templates in C++
//Swapping using template
#include<iostream>
using namespace std;

template <class T>
//never use inbuilt keyword as your function name or variables
void swapp(T *n1,T *n2)//both the argument should be same otherwise swap might 
//behave abnormally
{
    T n3;
    n3=*n2;
    *n2=*n1;
    *n1=n3;
}

//MAIN
int main(){
    int A,B;//string, double, char all are possible.
    cout << "Enter two numbers:" << endl;
    cin >> A >> B;
    cout << "Before Swapping numbers are:" << A << " , " << B;
    swapp(&A,&B);
    cout << "\nAfter Swapping numbers are:" << A << " , " << B;
    cout << "\nSwapping Double now:" << endl;
    double C,D;
    cin >> C >> D;
    cout << "\nBefore Swapping numbers are:" << C << " , " << D;
    swapp(&C,&D);
    cout << "\nAfter Swapping numbers are:" << C << " , " << D;
    return 0;
}
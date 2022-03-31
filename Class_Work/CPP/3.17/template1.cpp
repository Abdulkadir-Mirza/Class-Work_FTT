//Abdulkadir Mirza --- Templates in C++
#include<iostream>
using namespace std;

template <class T, class U>//Using two different generic types so that we
//can have multiple datatypes.
void mul(T n1,U n2){
    cout << "Result is: " << n1*n2 << endl ;
}

//MAIN
int main(){
    double A;
    int X;
    cout << "Enter a double number: ";
    cin >> A;
    cout << "Enter a int number: ";
    cin >> X;
    mul(A,X);
}
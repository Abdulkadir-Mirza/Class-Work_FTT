//Abdulkadir Mirza --- Templates in C++
//Template fuhnction Overloading
#include<iostream>
using namespace std;

template <class T, class U>
void mul(T n1,U n2){
    cout << "Result is: " << n1*n2 << endl ;
}

template <class T, class U>//Two functions with same name but different no.
//of argumnets-- Template function overloading
void mul(T n1,U n2,T n3){
    cout << "Result is: " << n1*n2*n3 << endl ;
}

//MAIN
int main(){
    double A;
    int X,Y;
    cout << "Enter a double number: ";
    cin >> A;
    cout << "Enter a int number: ";
    cin >> X;
    mul(A,X);
    cout << "Enter a int number: ";
    cin >> Y;
    mul(X,A,Y);
}
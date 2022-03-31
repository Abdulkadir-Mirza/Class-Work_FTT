//Abdulkadir Mirza --- C++ Inline functions
#include<iostream>
using namespace std;

//Inline function
inline int cube(int x){
    return x*x*x;
}

//MAIN
int main(){
    int x;
    cout << "Enter an integer:";
    cin >> x;
    cout << "Cube is " <<cube(x);
    return 0;
}
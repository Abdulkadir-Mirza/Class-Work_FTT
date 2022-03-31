//Abdulkadir Mirza --- Templates in C++
//Static variables and function templates.
#include <iostream>
using namespace std;

template <typename T>
void f(const T &x) {
static int i = 10;
cout << ++i << endl;
}



int main(){
f<int> (1);
f<int> (2);
f<double> (10.1);
return 0;
}
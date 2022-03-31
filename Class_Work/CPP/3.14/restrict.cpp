//Abdulkadir Mirza --- C++ Exception handling
//Throwing object of a class from a parent class to catch in main.
//Object can be thrown and catch.
//Nesting of class inside a class is possible
#include <iostream>

using namespace std;

class test 
{
int x;
public:
void get() {
cout << "Enter" << endl;
cin >> x;
}
class EVEN {};
class ODD {};
void check() {
if(x % 2 == 0) {
throw EVEN();
}
else {
throw ODD();
}
}
};

//Since EVEN class is a member of test class, outside the class we can have another
//class EVEN with the same name
class EVEN{
int i;
};

int main() 
{
test t1;
test::EVEN e1;//creating object of a class from test class
t1.get();
try {
t1.check();
}
catch(test::ODD) { cout << "Odd" << endl; }
catch(test::EVEN) { cout << "Even" << endl; }
return 0;
}
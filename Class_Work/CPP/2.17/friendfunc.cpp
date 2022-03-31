//Abdulkadir Mirza --- C++ Program for friend function
#include <iostream>

using namespace std;
class XYZ;

//ABC class
class ABC {
	int numA;
	public:
		void set(int x) {
			numA = x;
		}
		friend int add(ABC, XYZ);
};

//XYZ class
class XYZ {
	int numB;
	public:
		void set(int x) {
			numB = x;
		}
		friend int add(ABC, XYZ);
};

//Friend function to both classes
int add(ABC objA,XYZ objB) {
	return(objA.numA + objB.numB);
}

//MAIN
int main() {
	ABC objA;
	XYZ objB;
	objA.set(1);
	objB.set(2);
	cout << add(objA, objB) << endl;
	return 0;
}

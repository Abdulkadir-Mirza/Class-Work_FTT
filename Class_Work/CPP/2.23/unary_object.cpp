//Abdulkadir Mirza --- Unary operator overloading and appending it to an object
#include <iostream>

using namespace std;

class space {
	public:
		int a;
		space() {
			a = 0;
		}
		space(int x) {
			a = x;
		}
		
		space operator ++();
		space operator ++(int);
		
		void operator --() {
			--a;
			cout << "Preincrement sub " << a << endl;	
		}
		
		void operator --(int) {
			a--;
			cout << "Postincrement sub " << a << endl;
		}
		
		int display() {
			return a;	
		}
};

space space::operator ++() {
	space s2;
	s2.a = ++a;
	return s2;
}
		
space space::operator ++(int) {
	space s2;
	s2.a = a++;
	return s2;
}

int main() {
	space s1(5);
	space s2;
	s2 = ++s1;
	cout << "Preincrement add " << s2.display() << endl;
	s2 = s1++;
	s2 = s1++;
	cout << "Postincrement add " << s2.display() << endl;
	--s1;
	s1--;
	return 0;
}
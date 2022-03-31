//Abdulkadir Mirza --- Unary operator overloading using friend function
#include <iostream>

using namespace std;

//Forward declaration of class
class space;

inline void operator -(space &s);
inline void operator ++(space &s);
inline void operator --(space &s);

class space {
	int a,b,c;
	public:
		space(int x, int y, int z) {
			a = x;
			b = y;
			c = z;
		}
		
		void display() {
			cout << "The values of a,b and c are: " << a << " " << b << " " << c << endl; 
		}
		
		friend void operator -(space &s);
		friend void operator ++(space &s);
		friend void operator --(space &s);
};

void operator -(space &s) {
	s.a = -s.a;
	s.b = -s.b;
	s.c = -s.c;
}

void operator ++(space &s) {
	s.a = ++s.a;
	s.b = ++s.b;
	s.c = ++s.c;
}

void operator --(space &s) {
	s.a = --s.a;
	s.b = --s.b;
	s.c = --s.c;
}

int main() {
	space s1(5,10,15);
	cout << "Original a,b,c values:" << endl;
	s1.display();
	cout << "a,b,c values after overloading ++ operator:" << endl;
	++s1;
	s1.display();
	cout << "a,b,c values after overloading -- operator:" << endl;
	--s1;
	s1.display();
	cout << "a,b,c values after overloading - operator:" << endl;
	-s1;
	s1.display();
	return 0;
}
//Abdulkadir Mirza --- Usage of "new" operator to allocate memory
#include <iostream>
using namespace std;

//MAIN
int main() {
	int *a = new int;
	*a = 5;
	int b = *a;
	cout << "Value of a is : " << *a << endl;
	cout << "Address of int is : " << a << endl;
	cout << "Address of int pointer is : " << &a << endl;
	cout << "Size of *a is : " << sizeof(*a) << endl;
	cout << "Size of a is : " << sizeof(a) << endl;
	delete(a);
	cout << endl;
	cout << "After deleting " << endl;
	cout << "Value of a is : " << *a << endl;
	cout << "Address of int is : " << a << endl;
	cout << "Address of int pointer is : " << &a << endl;
	cout << "Size of *a is : " << sizeof(*a) << endl;
	cout << "Size of a is : " << sizeof(a) << endl;
	cout << endl;
	cout << "After *a=6 " << endl;
	*a = 6;
	int i, *sum;
	sum = &i;
	*sum = *a + *a;
	cout << "Sum of a+a : " << *sum << endl;
	cout << "Value of a is : " << *a << endl;
	cout << "Address of int is : " << a << endl;
	cout << "Address of int pointer is : " << &a << endl;
	cout << "Size of *a is : " << sizeof(*a) << endl;
	cout << "Size of a is : " << sizeof(a) << endl;
	return 0;
}

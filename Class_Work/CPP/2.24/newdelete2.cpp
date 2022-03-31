//Abdulkadir Mirza --- Program to demonstrate different use cases of new and delete
#include <iostream>
using namespace std;

//Class A
class A {
	public:
		int i,j;
		
		A() {
			cout << "Inside constructor" << endl;
			i = 0;
			j = 10;
		}
		
		~A() {
			cout << "Inside destructor" << endl;
		}
};

//MAIN
int main() {

	int *p1, *p2, sum;
	A a1, *a2;
	p1 = new int;
	//creating a new array dynamically
	p2 = new int[5];
	//creating obj array dynamically
	a2 = new A[5];
	int l=10;
	//Adding elements to array
	for(int k=0;k<5;k++) {
		p2[k] = l;
		l++;
	}
	//Priting the array
	for(int k=0;k<5;k++) {
		cout << p2[k] << endl;
	}
	//creating new array
	//int arr[5] = {0};
	//creating object
	//A a[5];
	delete(p1);
	delete(p2);
	delete[] a2;
	char *c = (char *)malloc(sizeof(char)*5);
	delete(c);
	

}

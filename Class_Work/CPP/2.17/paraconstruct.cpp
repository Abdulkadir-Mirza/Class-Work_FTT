//Abdulkadir Mirza --- Constructor and Destructor implementation
#include<iostream>
using namespace std;

class Distance{
public:
int feet;
int inch;

Distance()//Default COnstructor
	{
	feet=0;
	inch=0;
	cout << "Constructor called!!!\n";
	}

Distance(int x,int y)//Parameterized Constructor
	{
	feet=x;
	inch=y;
	cout << "Constructor called!!!\n";
	}

Distance(Distance &obj)//Copy Constructor
	{
	feet=obj.feet;
	inch=obj.inch;
	cout << "Constructor called!!!\n";
	}

~Distance()//Destructor
	{
	cout << "Destructor called!!!";
	}
};


//MAIN
int main()
{
Distance d1;
Distance d2(5,6);
Distance d3(d2);
cout << d1.feet << " feet and " << d1.inch << " inches.\n";
cout << d2.feet << " feet and " << d2.inch << " inches.\n";
cout << d3.feet << " feet and " << d3.inch << " inches.\n";

return 0;
}

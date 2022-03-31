//Abdulkadir Mirza --- C++ Program that uses various function types and switch case to implement a 7-functionality calculator
#include<iostream>
#include<cmath>
using namespace std;

//calc class
class calc{
	public:
		int i1, i2;
	
	void setinput(int a,int b){
		i1=a;
		i2=b;
		}
	int add(){
	return i1+i2;
	}
	int sub();
	int mul(){
	return i1*i2;
	}
	int div(){
	return i1/i2;
	}
	int rem(){
	return i1%i2;
	}
	int power(){
	return pow(i1,i2);
	}
};


//Function Definition outside class
int calc :: sub(){
	return i1-i2;
	}


//MAIN Method
int main(){
calc obj1;
int x,y,ch,i=1;
cout << "Enter two numbers:";
cin >> x >> y;
obj1.setinput(x,y);
while(i){
cout << "\nMENU\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Remainder\n6.Power\n7.Quit\nEnter your choice of operation: ";
cin >> ch;
switch(ch){
	case 1:
		cout << obj1.i1 << " + " << obj1.i2 << " is: " << obj1.add();
		break;
	case 2:
		cout << obj1.i1 << " - " << obj1.i2 << " is: " << obj1.sub();
		break;
	case 3:
		cout << obj1.i1 << " * " << obj1.i2 << " is: " << obj1.mul();
		break;
	case 4:
		cout << obj1.i1 << " / " << obj1.i2 << " is: " << obj1.div();
		break;
	case 5:
		cout << obj1.i1 << " % " << obj1.i2 << " is: " << obj1.rem();
		break;
	case 6:
		cout << obj1.i1 << " ^ " << obj1.i2 << " is: " << obj1.power();
		break;
	case 7:
		cout << "Quitting you out, Thank YOU!!!";
		i=0;		
		break;
	default:
		break;

		}
	}
return 0;
}

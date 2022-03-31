//Abdulkadir Mirza --- Code for passing object and returning object from a function.
#include<iostream>
using namespace std;


//Measure Class
class Measure{
	public:
		int l;
		int h;
		int w;

	void setinput(int len,int hei,int wid){
		l=len;
		h=hei;
		w=wid;
		}

	int area(){
	return 2*(l*h+h*w+w*l);
	}

	int volume(){
	return l*h*w;
	}
	
	//Object with return type object and arguments as objects.
	Measure add(Measure obj1, Measure obj2){
	Measure obj3;
	obj3.l=obj1.l+obj2.l;
	obj3.h=obj1.h+obj2.h;
	obj3.w=obj1.w+obj2.w;
	return obj3;
	}

};


//MAIN
int main(){
Measure obj1,obj2,obj3;
obj1.setinput(1,2,3);
cout << "Area and volume of object 1 is : " << obj1.area() << " and " << obj1.volume();
obj2.setinput(4,5,6);
cout << "\nArea and volume of object 2 is : " << obj2.area() << " and " << obj2.volume();


obj3 = obj1.add(obj1,obj2);//Passing objects in function and getting a object in return from the function add
cout << "\nArea and volume of object 2 is : " << obj3.area() << " and " << obj3.volume();


return 0;
}


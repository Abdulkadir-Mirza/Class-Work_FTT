//Abdulkadir Mirza --- C++ Program that extracts current time and date from the system and performs various conversions in function
#include<iostream>
#include<ctime>
using namespace std;

//Time Class
class Time{
	private:
	int h,m,s;

	public:
	int x,y,z;
	time_t now = time(0);
	tm* itm =localtime(&now);
	
	void setTime(){
	h=itm->tm_hour;
	m=itm->tm_min;
	s=itm->tm_sec;
	}

	Time getTime(){
	Time obj;
	obj.x=h;
	obj.y=m;
	obj.z=s;
	return obj;
	}

	Time sleepTime(int x,int y,int z){
	Time obj3;
	obj3.h=h-x;
	obj3.m=m-y;
	obj3.s=s-z;
	return obj3;
	}



};


//Date Class
class date{
	public :
	int day;
	int month;
	int year;
	time_t now = time(0);
	tm* itm =localtime(&now);

	date setDate(){
	date obj;
	obj.day=itm->tm_mday;
	obj.month=1+itm->tm_mon;
	obj.year=1900+itm->tm_year;
	return obj;
	}
	
	date getDate(){
	date obj;
	obj.day=day;
	obj.month=month;
	obj.year=year;
	return obj;
	}

	date setDoB(int d,int m, int y){
	date obj;
	obj.day=d;
	obj.month=m;
	obj.year=y;
	return obj;

	}

	void findAge(date obj){
	date obj1;
	obj1=obj1.setDate();
	int d,m,y;
	y=obj1.year-obj.year;
	m=obj1.month-obj.month;
	if(m<0){
	y=y-1;
	m=m+12;
	}
	d=obj1.day-obj.day;
	cout << "\nCurrent date is: " << obj1.year << " " << obj1.month << " " << obj1.day << "\n";
	cout << "\nDate of Birth is: " << obj.year << " " << obj.month << " " << obj.day << "\n";
	cout << "\nAge is: " << y << " years " << m << " months " << d << " days.";
	}

};


//MAIN Method
int main(){
Time obj1,obj;
obj1.setTime();
obj1= obj1.getTime();
cout << "Time is : " << obj1.x << ":" << obj1.y << ":" << obj1.z;
obj=obj1.sleepTime(10,0,0);


date obj2;
obj2=obj2.setDoB(9,7,2001);
obj2.findAge(obj2);

return 0;
}

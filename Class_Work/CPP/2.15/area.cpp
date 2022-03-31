//Abdulkadir Mirza --- C++ Program to find are and volume.
#include <iostream>
using namespace std;

//Measure Class
class Measure {

	private:
		int length, height, width = 0;
	
	public:
		void setinput(int x, int y, int z){
			length = x;
			height = y;
			width = z;
		}
		
		int area() {
			return 2*(length*width) + 2*(length*height) + 2*(width*height);
		}
		
		int volume() {
			return length*height*width;
		}
};


//MAIN
int main() {

	Measure m1;
	Measure m2;
	int l,h,w;
	cout << "Enter length, height and width of first box" << endl;
	cin >> l >> h >> w;
	m1.setinput(l,h,w);
	cout << "Enter length, height and width of second box" << endl;
	cin >> l >> h >> w;
	m2.setinput(l,h,w);
	cout << "The area and volume of first box are " << m1.area() << " and " << m1.volume() << endl;
	cout << "The area and volume of second box are " << m2.area() << " and " << m2.volume() << endl;
	return 0;
}

//Abdulkadir Mirza --- Templates in C++
//Templates in class
#include<iostream>
using namespace std;

template<class T1,class T2>//class using two different generic datatypes.
class Sample{
    T1 a;
    T2 b;
    public:
    void getdata(){
        cout << "Enter A and B:" << endl;
        cin >> a >> b;
    }
    void display(){
        cout << "The Values are: ";
        cout << a << " , " << b << endl;
    }
    };

int main(){
    Sample<int,float> s1;
    //defining datatype of generic template while object creation, here we must
    //provide two datatypes.
    cout << "\nInt and float data:" << endl;
    s1.getdata();
    s1.display();

    Sample<int,char> s2;
    cout << "\nInt and char data:" << endl;
    s2.getdata();
    s2.display();

    Sample<string,char> s3;
    cout << "\nString and char data:" << endl;
    s3.getdata();
    s3.display();
    return 0;
}
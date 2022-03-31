//Abdulkadir Mirza --- Type Conversion in C++
// basic type to class type conversion
// HW: input: 1.27, output: hour=1, min=27

#include<iostream>
#include<math.h>

using namespace std;

class Time{
    int hour;
    float min;
    public:
    // Time(){
    //     cout<<"default constructer called"<<endl;
    // }   
    //     // we are setting the values using constructor
    //     Time(int a){
    //         cout<<"inside the time constructor"<<endl;
    //         hour = a/60;
    //         min = a%60;
    //     }

        // we are setting constructor using overloading(assignment operator overload). precedence will always be given to overloader
        // void operator=(int x){
        //     cout<<"inside overloaded"<<endl;
        //     hour = x/60;
        //     min = x%60;
        // }

        void operator=(float x){
            cout<<"inside float overloaded"<<endl;
            int h = x;
            float m = x - (int) h;
            hour = h;
            min = m*100;
            cout<<m<<endl;
        }

        void display(){
            cout<<"hour: "<<hour<<" minute: "<<min<<endl;
        }
};

int main(){
    float x = 9.12;
    Time t1;
    t1 = x;
    t1.display();
    return 0;
}

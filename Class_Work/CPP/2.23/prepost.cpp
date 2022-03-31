//Abdulkadir Mirza --- C++ Program to check pre increment and post increment.
#include<iostream>
using namespace std;

//Class
class demo{
    int m;
    public:
    demo(){
        m=0;
    }
    demo(int x){
        m=x;
    }
    void operator++ (){
        cout << "Pre-Increment: " << ++m << endl;
    }
        void operator++ (int){
        m++;
        cout << "Post-Increment: " << m++ << endl;
    }
    void operator-- (){
        cout << "Pre-Decrement: " << --m << endl;
    }
        void operator-- (int){
        cout << "Post-Decrement: " << m-- << endl;
    }
};

//MAIN
int main(){
    demo d1(5),d2(10);
    cout << "======================Increments===================" << endl;
    d1++;
    ++d1;
    cout << "======================Decrements==================" << endl;
    d2--;
    --d2;
    return 0;
}
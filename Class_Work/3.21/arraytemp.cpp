//Abdulkadir Mirza --- Templates in C++
//Defining template class with one type(template) and one non-type(here int);
#include<iostream>
using namespace std;

template<class T,int N>//T is generic and N will refer to int datatype
class myclass{
    T array[N];
    public:
    void set(int x,T value);
    T get(int x);
};

template<class T,int N>
void myclass<T,N> :: set(int x,T value){
    array[x]=value;
}

template<class T,int N>
T myclass<T,N> :: get(int x){
    return array[x];
}

int main(){
    myclass<int,5> ob1;
    myclass<double,5> ob2;
    ob1.set(0,100);
    ob2.set(3,11.99);
    cout << ob1.get(0) << endl;
    cout << ob2.get(3) << endl;
}
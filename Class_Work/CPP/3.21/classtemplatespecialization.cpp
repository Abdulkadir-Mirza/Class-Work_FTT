//Abdulkadir Mirza --- Templates in C++
//Class Template Specialization
#include<iostream>
using namespace std;

template<class T>
class Addition{
    public:
    T add(T n1,T n2){
        T res;
        cout << "Inside template class\n";
        res=n1+n2;
        return res;
    }
};

template<>
class Addition<int>{
    public:
    int add(int n1,int n2){
        int res;
        cout << "Inside specialization class\n";
        res=n1+n2;
        return res;
    }
};

int main(){
    Addition<int> ob1;
    cout << "Addition is: " <<  ob1.add(2,3) << endl;
    Addition<double> ob2;
    cout << "Addition is: " <<  ob2.add(2.33,3.66) << endl;
    return 0;
}
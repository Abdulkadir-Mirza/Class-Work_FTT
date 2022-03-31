//Abdulkadir Mirza --- Templates in C++
//Templates in class
#include<iostream>
using namespace std;

template<class T>
class Addition{
    public:
    T add(T n1,T n2){
        T res;
        res=n1+n2;
        return res;
    }
};

int main(){
    Addition<int> ob1;//defining datatype of generic template while object creation
    Addition<float> ob2;
    Addition<string> ob3;
    int a=10, b=20, c;
    float A=11, B=22.22, C;
    string str1="good",str2="afternoon", str3;

    c=ob1.add(a,b);
    cout <<"Sum of int:" << c << endl;
    C=ob2.add(A,B);
    cout <<"Sum of float:" << C << endl;
    str3=ob3.add(str1,str2);
    cout <<"Sum of float:" << str3 << endl;

    return 0;
}
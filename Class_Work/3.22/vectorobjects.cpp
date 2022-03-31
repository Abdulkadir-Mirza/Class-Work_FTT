//Abdulkadir Mirza --- STL in C++
//Vector implementation: Class Objects in Vector
//Storing Objects of a class in a vector and accesing its data member functions and variables
#include<iostream>
#include<vector>
using namespace std;

//class
class temp{
    int t;
    public:
    temp(){
        t=0;
    }
    temp(int x){
        t=x;
    }
    temp &operator=(int x){
        t=x;
        return *this;
    }
    double get_temp(){
        return t;
    }
    
};//temp class ends

bool operator<(temp a,temp b){
    return a.get_temp() < b.get_temp();
}

bool operator==(temp a,temp b){
    return a.get_temp() == b.get_temp();
}

//MAIN
int main(){

    vector<temp> v;
    int i=0;
    for(i;i<7;i++)
        v.push_back(temp(60 + rand()%30));

    cout << "Fahrenheit temperatures\n";
    for(i=0;i<v.size();i++)
        cout << v[i].get_temp() << "  ";
    cout << endl;

    //Converting Fahrenheit to celsius
    for(i=0;i<v.size();i++)
        v[i] = (v[i].get_temp()-32) * 5/9;
    cout << "Centigrade temperatures\n";
    for(i=0;i<v.size();i++)
        cout << v[i].get_temp() << "  ";
    cout << endl;
    
    return 0;
}
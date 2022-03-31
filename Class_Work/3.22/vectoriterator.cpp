//Abdulkadir Mirza --- STL in C++
//Vector implementation: Iterators
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> v(10);
    vector<char>::iterator p;//declaring iterator p
    int i;
    p=v.begin();
    i=0;
    while(p!=v.end()){
        *p = i + 'a';
        p++;
        i++;
    }

    cout << "Reverse contents:\n";
    while(p>=v.begin()){
        p--;
        cout << *p << "  ";
    }
    cout << "\n\n";
    //p=v.begin();
    cout << "Current contents:\n";
    p=v.begin();
    for(p;p<v.end();p++)
        cout << *p << "  ";
    cout << "\n\n";

    return 0;
}
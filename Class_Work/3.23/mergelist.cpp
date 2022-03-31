//Abdulkadir Mirza --- STL in C++
//Lists
//merge()
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l1,l2;
    int i;
    for(int i=0;i<10;i++){
        l1.push_back(i+20);
    }


    cout << "Size: " << l1.size() << endl;
    cout << "List 1 contents: " << endl;
    list<int>::iterator p = l1.begin();
    while(p!=l1.end()){
        cout << *p << " ";
        p++;
    }
    cout << "\n\n";
    for(int i=0;i<10;i++){
        l2.push_back(i);
    }


    cout << "Size: " << l1.size() << endl;
    cout << " List 2 contents: " << endl;
    list<int>::iterator q = l2.begin();
    while(q!=l2.end()){
        cout << *q << " ";
        q++;
    }
    cout << "\n\n";

    l1.merge(l2);
    cout << "Size: " << l1.size() << endl;
    cout << "List 1 contents: " << endl;
    p = l1.begin();
    while(p!=l1.end()){
        cout << *p << " ";
        p++;
    }
    cout << "\n\n";
    
    return 0;
}
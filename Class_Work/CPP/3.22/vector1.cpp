//Abdulkadir Mirza --- STL in C++
//Vector implementation:Initialization, Declaration, Accessing, Modifying
/*A vector is a sequence container class that implements dynamic array, 
means size automatically changes when appending elements. 
A vector stores the elements in contiguous memory locations and allocates 
the memory as needed at run time.*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<char> v(10);
    int i;

    cout << "Size = " << v.size() << endl;

    for(i=0;i<10;i++)
        v[i]=i+'a';
    cout << "Current contents:\n";
    for(i=0;i<v.size();i++)
        cout << v[i] << "  ";
    cout << "\n\n";
    //Now we are dynamically changing the size of the vector
    cout << "Expanding Vector\n";
    //push_back inserts data at after the last element present in vector
    for(int i=0;i<10;i++)
        v.push_back(i+10+'a');

    cout << "Size now= " << v.size() << endl;
    cout << "Current contents:\n";
    for(i=0;i<v.size();i++)
        cout << v[i] << "  ";
    cout << "\n\n";

    //Modifying contents of vector here we are replacing small case characters
    //to uppercase characters using method toupper()
    for(i=0;i<v.size();i++)
        v[i]=toupper(v[i]);

    cout << "Modified contents:\n";
    for(i=0;i<v.size();i++)
        cout << v[i] << "  ";
    cout << "\n\n";

    v.pop_back();//deletes the last element and reduces the size of the vector by one.
    cout << "Modified contents after pop_back:\n";
    for(i=0;i<v.size();i++)
        cout << v[i] << "  ";
    cout << "\n\n";
    return 0;
}
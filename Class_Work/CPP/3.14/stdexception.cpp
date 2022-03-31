//Abdulkadir Mirza --- C++ Exception handling
//Standard exceptions
#include<iostream>
#include<exception>
using namespace std;

int main(){

    try{
        int *myarray = new int[100];
        /*int array[5]={1,2,3,4,5};
        cin >> array[6];*/
    }
    catch(exception &e){
        cout << "Std Exception: " << e.what() << endl; 
    }
    return 0;
}
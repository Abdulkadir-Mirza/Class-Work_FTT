#include<iostream>
#include<fstream>
#include<exception>
using namespace std;

int main(){

    try{
        ifstream myfile("test.txt");
        myfile.exceptions(ifstream::failbit);
    }
    catch(exception &e){
        cout << "Std error: " << e.what() << endl;
    }
    return 0;
}
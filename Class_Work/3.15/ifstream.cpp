//Abdulkadir Mirza --- I/O Operations
#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){

    fstream ifile;
    ifile.open("abc.txt",ios::in|ios::out);
    string s;
    if ( ifile.is_open() ) // always check whether the file is open
    { 
        string str="Hi guys,this is meeeeeeeeeeeeeee";
        ifile.write(str,20);
    }
    
}
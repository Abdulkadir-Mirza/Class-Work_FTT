//Abdulkadir Mirza --- I/O Operations
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream ifile;
    ifile.open("file3.txt");//,ios::in|ios::out);
    string s1,s2;
    if(!ifile)
        cout << "File Did not open" << endl;
    else{
        while ( !ifile.eof() )
        {
            ifile >> s1 >> s2; 
            cout << s1 << '\t' << s2 << endl;
        } 
    }
}
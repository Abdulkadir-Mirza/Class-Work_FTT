//Abdulkadir Mirza --- I/O Operations
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream ifile;
    ifile.open("file1.txt");//,ios::in|ios::out);
    string s;
    if(!ifile)
        cout << "File Did not open" << endl;
    else{
        while ( !ifile.eof() )
        {
            ifile >> s; // pipe file's content into stream
            cout << s << " " << endl;// pipe stream's content to standard output
        } 
    }
}
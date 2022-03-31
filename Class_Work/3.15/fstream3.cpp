//Abdulkadir Mirza --- I/O Operations
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream ifile;
    ifile.open("file.txt");//,ios::in|ios::out);
    string s;
    if(!ifile)
        cout << "File Did not open" << endl;
    else{
        while ( getline(ifile,s) )
        {
            cout << s << " " << endl;// pipe stream's content to standard output
        } 
    }
}
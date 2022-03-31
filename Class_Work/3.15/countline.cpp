//Abdulkadir Mirza --- Count the number of lines 

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream ifile;
    ifile.open("file1.txt");//,ios::in|ios::out);
    string s1;
    int count=0;
    if(!ifile)
        cout << "File Did not open" << endl;
    else{
        while ( getline(ifile,s1) )
        {
            ifile >> s1;
            count++;
        }
        }
    cout << "Total Words: " <<count;
}
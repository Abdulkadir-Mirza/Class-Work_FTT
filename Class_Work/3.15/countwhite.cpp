//Abdulkadir Mirza --- C++ Count No. of White Spaces

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream ifile;
    ifile.open("file.txt");//,ios::in|ios::out);
    char ch;
    int count=0;
    if(!ifile)
        cout << "File Did not open" << endl;
    else{
        while ( !ifile.eof() )
        {
            ifile.get(ch);
            if(ch==' ')
            count++;
        } 
        /*
        while ( getline(ifile,s1,' ') )
        {                           //Using Getline function
            ifile >> s1;
            count++;
        }*/
        }
    cout << "Total White Spaces: " <<count;
}
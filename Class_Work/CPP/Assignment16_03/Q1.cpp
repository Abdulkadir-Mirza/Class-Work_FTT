//Abdulkadir Mirza --- E102 S1 T2
//Count the number of times the word 'the' is present in the file

#include<iostream>
#include<fstream>
#include<cstring>
#include<exception>
using namespace std;

int main(){

    ifstream ifile;
    char str[40];
    int cmp;
    int count=0;
    ifile.open("data1.txt");
    if(!ifile)
        cout << "File Did not open" << endl;
    else
    {
        while ( !ifile.eof() )
        {
            ifile >> str;
            cmp=strcmp(str,"the");
            if(cmp==0)
                count++;
        }    
    }
    cout << "Total 'the' words in file: " <<count;
}
//Abdulkadir Mirza --- E102 S1 T2
//Count the number words that starts with 'e'.

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
            if(str[0]=='e')
            count++;
        }    
    }
    cout << "Total words in the file statring with 'e' are: " <<count;
}
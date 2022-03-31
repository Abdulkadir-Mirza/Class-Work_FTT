//Abdulkadir Mirza --- I/O Operations
#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){
    char ch;
    ofstream ifile;
    ifile.open("abc1.txt",ios::in|ios::out);
    
    ifile.put('b');
    ifile.close();
    ifstream ifile1;
    ifile1.open("abc1.txt",ios::in|ios::out);
    ifile1.get(ch);
    cout << ch;
}
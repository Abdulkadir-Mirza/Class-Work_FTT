//Abdulkadir Mirza --- C++ Program to copy contents of one file into another
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream o("fileo.txt");
    fstream fin,fout;
    fin.open("file.txt");
    fout.open("fileo.txt");
    char ch;
    while(!fin.eof()){
        fin.get(ch);
        fout << ch;
    }
    cout << "Copy Done!" << endl;
    fin.close();
    fin.close();
}
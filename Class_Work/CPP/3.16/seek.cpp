//Abdulkadir Mirza --- I/O Operations Seek function
#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ofstream ofile;
    ofile.open("data1.txt");
    ofile << "This is my file";
    long pos = ofile.tellp();
    ofile.seekp(pos+6);
    ofile << "Again my file";
    ofile.close();
    cout << "Done";
}
//Abdulkadir Mirza --- I/O Operations Seek function
#include<fstream>
#include<iostream>
using namespace std;

int main(){

    fstream file;
    file.open("data2.txt",ios::app);
    char buf[100];
    int pos;
    cout << "Writing to file" << endl;
    file<<"line one"<<endl;
    file<<"line two"<<endl;
    pos=file.tellp();
    cout << "Current positiion: " << pos << endl;
    file.seekp(-7,ios::cur);
    file <<endl << "random data";
    file.seekp(7,ios::beg);
    file<<"Hello world";
    file.close();
    cout << "Done writing" << endl;
    file.open("data2.txt");
    cout << "Reading the file" << endl;
    file.seekg(0);
    while(!file.getline(buf,100)){
        cout<<buf << endl;
    }
    pos=file.tellg();
    cout << "Pointer is at: " << pos << endl;
    cout << "Done";
    return 0;
}
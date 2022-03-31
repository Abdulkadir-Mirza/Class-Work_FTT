//Abdulkadir Mirza --- I/O Operations Appned data to a file
#include<fstream>
#include<iostream>
using namespace std;

int main(){
    char line[100];
    fstream file;
    file.open("data.txt",ios::out|ios::app);
    if(!file)
        cout << "File did not open" << endl;
    else{
        cout << "Name:" << endl;
        cin.getline(line,100);
        file << line << endl;
        cout << "Age: " << endl;
        cin.getline(line,100);
        file << line << endl;
        cout << "file updated" << endl;
    }
    file.close();
return 0;
}
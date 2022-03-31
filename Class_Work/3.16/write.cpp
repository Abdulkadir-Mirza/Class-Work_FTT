//Abdulkadir Mirza --- I/O Operations Write to a file
#include<fstream>
#include<iostream>
using namespace std;

int main(){
    ofstream ofile;
    ofile.open("data.txt");
    ofile << "Line one in the document" << endl;
    ofile << "Another line" << endl;
    cout << "To the terminal" << endl;
    ofile.close();
return 0;
}
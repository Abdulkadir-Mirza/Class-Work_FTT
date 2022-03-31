//Abdulkadir Mirza --- E102 S1 T2
//Count the number words that ends with 's'.

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
    ifile.open("data.txt");
    if(!ifile)
        cout << "File Did not open" << endl;
    else
    {
        while ( !ifile.eof() )
        {
            ifile >> str;
            int len=strlen(str);
            if(str[len-1]=='s')
                count++;
        }    
    }
    cout << "Total words in the file ending with 's' are: " <<count;
}
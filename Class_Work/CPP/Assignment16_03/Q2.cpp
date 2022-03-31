//Abdulkadir Mirza --- E102 S1 T2
//Count the number words that has 'a' present in them

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
            int len=strlen(str);
            for(int i=0;i<len;i++){
                if(str[i]=='a'){
                    count++;
                    break;
                }
            }
        }    
    }
    cout << "Total words in the file containing 'a' are: " <<count;
}
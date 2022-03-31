//Abdulkadir Mirza --- E102 S1 T2
/*Write a cpp program that shows a menu:
1.enter the student detail
2.find student
*/
#include<iostream>
#include<cstring>
#include<fstream>



using namespace std;



inline int getdetails();
inline int showdetails();



int get = 0;
//MAIN
int main() 
{
int a=1;
while(a!=3) 
{
cout << "\nMenu:" << endl;
cout << "1.Enter the student detail\n2.Find student\n3.Quit" << endl;
cout << "Enter your Choice:";
cin >> a;
switch(a){
    case 1:
        getdetails();
        if(get == 1) { cout << "Details entered successfully!" << endl; }
        break;
    case 2:
        showdetails();
        break;
    case 3:
        return 0;
    default:
    break;
    }
}
return 0;
}


//Enter the student details and save it into a file
int getdetails() 
{
ofstream test;
bool exception = false;
/* Check if file opens or handle the exception */
try {
test.exceptions(fstream::badbit | fstream::failbit);
test.open("student.txt",ios::app);
test.close();
}
catch (const fstream::failure& e) {
cout << endl << "!!Exception opening file!!" << endl;
exception = true;
}
if(!exception) {
int id;
char name[20],location[15],branch[10];
cout << "\nEnter the student details:" << endl;
cout << "ID:";
cin >> id;
cout << "Name:";
cin >> name;
cout << "Branch:";
cin >> branch;
cout << "Location:";
cin >> location;
ofstream fi;
fi.open("student.txt",ios::app);
fi << id << "\t" << name << "\t" << branch << "\t" << location << "\t" << endl;
fi.close();
get = 1;
}
return get;
}


//Show student details based on id we enter
int showdetails()
{
bool exception = false;
fstream test;
fstream fi;
try {
test.exceptions(fstream::badbit | fstream::failbit);
test.open("student.txt",ios::in);
test.close();
}
catch (const fstream::failure& e) {
cout << endl << "!!Exception opening/reading file error!!!" << endl;
exception = true;
}
if(!exception) {
int y=0;
char ch[30];
char x[10];
string s,c;
cout << "Enter the id of the student you want to show data: ";
cin >> x;
fi.open("student.txt",ios::in);
while ( getline(fi,s) ) {
/*Here we are reading the file line by line which means the id of student
will be at the beginning of each line, so we take the length of given id to search,
then we extract that length of characters from the line read from the file and append it to a string,
then we convert the id to find from character to string and comapre them*/

c=s;
int length = strlen(x);
string tofind2, givenid, tofind3;
string tofind1;
for(int i =0;i<length;i++) { givenid += x[i]; }
tofind1 = c[0];
for(int i =0;i<2;i++) {
    tofind2 += c[i];
}
for(int i =0;i<3;i++) {
    tofind3 += c[i];
}
if(givenid[0] == tofind1[0]) 
{
    if(givenid[0] + givenid[1] == tofind2[0] + tofind2[1]) 
    {
        if(givenid[0] + givenid[1] + givenid[2] == tofind3[0] + tofind3[1] + tofind3[2]) 
        {
            cout << "id\tname\tbrnch\tloc" << endl;
            cout << s << endl;
            y=1;
            break;
        }
    }
}
if(givenid[0] == tofind1[0]) 
{
    if(givenid[0] + givenid[1] == tofind2[0] + tofind2[1]) 
    {
        cout << "id\tname\tbrnch\tloc" << endl;
        cout << s << endl;
        y=1;
        break;
    }
    else if(givenid == tofind1) 
    {
        cout << "id\tname\tbrnch\tloc" << endl;
        cout << s << endl;
        y=1;
        break;
    }
}


}
fi.close();
if(y==0) { cout << "Student record not found!!!" << endl; }
}
return 0;
}
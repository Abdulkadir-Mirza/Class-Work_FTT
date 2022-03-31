//Abdulkadir Mirza --- I/O Operations Write structure to a file
#include<fstream>
#include<iostream>
using namespace std;

class student{
    public:
    int roll;
    char name[25];
    float marks;
    int rcount=0;
    void getdata(){
        cout << "Enter the roll no and name" << endl;
        cin >> roll >> name;
        cout << "marks:" << endl;
        cin >> marks;
    }
    void Addrecord(){
        fstream f;
        student stu;
        f.open("student.dat", ios::app|ios::binary);
        stu.getdata();
        f.write((char *)&stu,sizeof(stu));
        f.close();
    }
    void getrecord(int count){
        int count1;
        fstream f;
        f.open("student.dat", ios::in|ios::binary);
        fstream f1;
        f1.open("count.txt");
        f1 << count1;
        count=count+count1;
        for(int i=0;i<count;i++)
        //while(!f.eof())
        {
        
        student stu;
        f.read((char *)&stu,sizeof(stu));
        cout << "Roll no: " << stu.roll << "\nName: " << stu.name << "\nMarks: " << stu.marks << endl; 
        }
        f.close();
    }
};

int main(){
    student st1;
    char ch='n';
    int count1;
    do{
    st1.Addrecord();
    count1++;
    cout << "Want to add more data?(y/n)" << endl;
    cin >> ch;
    }while(ch=='y'||ch=='Y');
    
    cout << "Updated!!!" << endl;
    
    st1.getrecord(count1);
    return 0;
}
//Abdulkadir Mirza --- C++ Pointers with object
#include<iostream>
using namespace std;
class base1{
    protected:
    int i;
    public:
    base1(int x){
        i=x;
    }
    int getdata(){ return i; }
};

int main(){
    base1 d[3] = {55,66,77};
    base1 *ptr;
    ptr=d;//Assigning pointer to first object || similar to &d[0]
    for(int i=0;i<3;i++){
        cout << ptr->getdata() << endl;
        ptr++;
    }
    return 0;
}
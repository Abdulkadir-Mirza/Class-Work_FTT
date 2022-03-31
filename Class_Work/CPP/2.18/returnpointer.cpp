//Abdulkadir Mirza --- C++ Program that deals with addresses in function.
#include<iostream>
using namespace std;

int& max(int&,int&);//Function declaration

//MAIN
int main(){
    int a=5,b=6,ans;
    ans=max(a,b);
    cout << "Maximum: " << ans;
    return 0;
}

//Function Definition
int& max(int &x, int &y){
    if(x>y)
    return (x);
    else
    return (y);
}
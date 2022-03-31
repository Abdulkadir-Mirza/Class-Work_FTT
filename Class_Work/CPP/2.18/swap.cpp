//Abdulkadir Mirza --- C++ program to swap two numbers using address 
#include<iostream>
using namespace std;

//Swap Function
void swap(int *a,int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

//MAIN
int main(){
    int x,y;
    cin >> x >> y;
    cout << "x and y are : " << x <<  " , " <<y;
    swap(&x,&y);
    cout << "\nx and y are : " << x <<  " , " <<y;
    return 0;
}
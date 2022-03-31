//Abdulkadir Mirza --- C++ Try Catch Throw
#include<iostream>
#include<err.h>
using namespace std;

int main(){
    int n1,n2, ans;
    cout << "Enter 1st number:";
    cin >> n1;
    cout << "Enter 2nd number:";
    cin >> n2;
    try{
        if(n2==0)
            throw n2;
        else
        {
            ans=n1/n2;
            cout << "Result:" << ans;
        }   
    }
    catch(int x){
        cout << "Can't divide by: " << x ;
    }
    cout << "\nEnd of Program";
    return 0;
}
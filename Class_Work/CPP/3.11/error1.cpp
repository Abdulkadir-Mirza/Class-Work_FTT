//Abdulkadir Mirza --- C++ Exception handling
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

        if(n2!=0){
            float div = (float) n1/n2;
            
            if(n2>n1)
                throw div;
            if(div<0)
            throw 'e';
            cout << "n1/n2=" << div;
        }
        else
            throw n2;
    }
    catch(int x){
        cout << "Can't divide by: " << x ;
    }
    catch(char x){
        cout << "N1 is negative " ;
    }
    catch(float x){
        cout << "N2 is greater than N1 " << x ;
    }
    catch(...){
        cout << "Unknown Exception " ;
    }
    cout << "\nEnd of Program";
    return 0;
}
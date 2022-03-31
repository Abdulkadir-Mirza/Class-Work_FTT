//Abdulkadir Mirza --- C++ Exception handling
#include<iostream>
using namespace std;

int main(){
    int n1;
    cout << "Enter number:";
    cin >> n1;

    try{
        if(n1==1)
            throw n1;
        if(n1==2)
            throw 'A';
        if(n1==3)
            throw 4.5;
        throw 1.22f;   
       
    }
    catch(int x){
        cout << "\nInteger exception \t" << x ;
    }
    catch(char x){
        cout << "\nCharacter exception \t" << x ;
    }
    catch(double x){
        cout << "\nDouble exception \t" << x ;
    }
    catch(...){
        cout << "Unknown Exception " ;
    }
    cout << "\nEnd of Program";
    return 0;
}
//Abdulkadir Mirza --- C++ Exception handling
//restricting throw to specific types
#include<iostream>
using namespace std;


void demo() throw(int,double)
{
    int n1;
    cout << "Enter number:";
    cin >> n1;

        if(n1==1)
            throw n1;
        if(n1==2)
            throw 'A';
        if(n1==3)
            throw 4.5;
        //throw 1.22f;
}
int main()
{
    try{
    demo();//we can throw from outside the try catch by throwing in a method
    //called in try block
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
    cout << "\nEnd of Program";
    return 0;
}
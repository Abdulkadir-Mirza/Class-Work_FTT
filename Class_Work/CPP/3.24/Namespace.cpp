//Abdulkadir Mirza --- Namespaces
//User defined Namespace
#include <iostream>
using namespace std;

namespace demo //User defined Namespace that has variables and a class
{
int upperbound;
int lowerbound;
class counter 
    {
    int count;
    public:
    counter(int n) 
    {
        if(n <= upperbound) 
        {
        count = n;
        }
        else { count = upperbound; }
    }
    void reset(int n) 
    {
        if(n <= upperbound) 
        {
        count = n;
        }
    }
    int run() 
        {
        if(count > lowerbound) 
        {
        return count--;
        }
        else 
        {
        return lowerbound;
        }
        }
    };
}

//MAIN
int main() {
    demo::upperbound=100;
    demo::lowerbound=0;
    demo::counter ob1(10);
    int i;

    do{
        i=ob1.run();
        cout << i << " ";
    }while(i>demo::lowerbound);
    cout << endl;

    demo::counter ob2(20);
    do{
        i=ob2.run();
        cout << i << " ";
    }while(i>demo::lowerbound);
    cout << endl;

    ob2.reset(100);
    demo::lowerbound=85;
    do{
        i=ob2.run();
        cout << i << " ";
    }while(i>demo::lowerbound);
    cout << endl;
return 0;
}
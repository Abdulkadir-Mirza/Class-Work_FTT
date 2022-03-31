//Abdulkadir Mirza --- Overloading 'new' and 'delete' operators
/*Observations:
Since the overloaded new and delete are member functions of class loc, outside the class i.e. with 
other classes we will be calling default operators only.
*/
#include<iostream>
using namespace std;

//Class
class loc{
    int lon,lat;
    public:
    loc(){
        lon=0;
        lat=0;
        cout << "Default Constructor" << endl;
    }
    loc(int a,int b){
        lon=a;
        lat=b;
        cout << "Parameterized Constructor" << endl;
    }
    void display(){
        cout << "Displaying data" << endl;
        cout << "Coordinates are: lon- " << lon << " ,lat- " << lat << endl;
    }

    //Overloading new
    void * operator new(size_t byte){
        void *ptr;
        cout << "Inside the overloaded new" << endl;
        ptr = malloc (byte);
        if(ptr==NULL){
            cout << "Could not allocate the memory";
            //return 1;
        }
        return ptr;
    }

    //Overloading delete
    void operator delete(void *ptr){
        cout << "Inside the overloaded delete" << endl;
        free(ptr);
    }
};//Loc classs ends


//MAIN
int main(){
    loc l1, l2(10,5);
    l1.display();
    l2.display();
    loc *ptr=new loc(2,2);
    ptr->display();
    delete ptr;
    int *pt = new int;//Default new will be called
return 0;
}

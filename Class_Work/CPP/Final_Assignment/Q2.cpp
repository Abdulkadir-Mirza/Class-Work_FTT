/*Q2: The given code has a base class charInput, it has member methods add() and getvalue(). The class
numInput inherits charInput. You need to implement:
add(): it should be inside charInput, this adds the given character to the current value
getValue(): it should be inside numInput, it returns the current value
add(): it should be inside numInput, this must override the base class method so that each
non-numeric char is ignored.*/

#include<iostream>
#include<string>
using namespace std;


class charInput
{
    
    public:
    string str;
    void add(char c) {
        str=str+c;
    }
    string getValue() 
    { 
        return NULL; 
    }
};//charInput ends


class numInput : public charInput 
{   public:
    string getValue() 
    { 
        return str; 
    }
    void add(char c) {
    if((int(c))>47 && (int(c))<57)
        charInput::add(c);
        //if the c is numeric the add of parent class is calls that adds c to the string
    }

};//numInput ends


//MAIN
int main()
{
    numInput ob;
    ob.add('1');
    ob.add('a');
    ob.add('0');

    cout << ob.getValue() << endl;

return 0;
}
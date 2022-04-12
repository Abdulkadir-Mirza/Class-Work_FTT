/*Q3: You have a binary string with length N. You are allowed to do swap() operations of two elements
only if the index parity of both elements is the same. This means that: you can swap() an element at
index 2, with any element at index 4, 6, 8 etc. (even parity), similarly the element at index 3 can be
swapped with the element at index 1, 5,7,9 etc.*/

#include<iostream>
#include<string>
#include<cstring>
using namespace std;

int main(){

    string str;
    cout << "Enter the binary string:";
    cin >> str;
    int n=str.length();//Length of the string

    int count=0;//to store the count of '01'
    //Checking for '01' in input string
    for(int i=0;i<n;i++){
        if(i+2>n)
            break;

        if(str.at(i)=='0' && str.at(i+1)=='1')
            count++;
    }

    string str1=str;

    int x;//to store temporary counts of '01's in swapped string
    //Swapping elements such that index parity is same.
    for(int i=0;i<n;i++)
    {   str=str1;//Resetting string for swapping
        
        for(int j=i+2;j<n;j=j+2)
        {
            x=0;
            char c=str[i];
            str[i]=str[j];
            str[j]=c;
            for(int i=0;i<n;i++)
            {   
                if(i+2>n)
                    break;

                if(str.at(i)=='0' && str.at(i+1)=='1')
                    x++;
            }
            //Cheking if no. of '01's in swapped string is less than latest count
            if(x>count)
                count=x;

        }
    }

    cout << count << endl;
    return 0;

}
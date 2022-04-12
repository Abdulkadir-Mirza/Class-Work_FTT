/*Q7: Write a c++ program, this will take two input values for length and breadth of a chocolate bar.
You will get more money if you sell the chocolate in square shapes. So, you would try to divide the
chocolate into minimum possible number of square pieces, such that each piece has the same area and
the piece divide the chocolate bar (original big bar) perfectly. Note that this will give you most profit
for the entire bar.*/


#include<iostream>
using namespace std;

int main()
{

    int len,bd;//For storing length and breadth of Rectangle
    cout << "Length : ";
    cin >> len;
    cout << "Breadth : ";
    cin >> bd;
    int RectangleArea=len*bd;
    int SquareArea;//Used for calculating area of Sqaure we will make after dividing
    int n;
    if(len<bd){
        n=len;
    }
    else
        n=bd;
    int noSquare=-1;
    //Looping for various possible square length that will divide rectangle in equal parts.
    for(int i=2;i<n;i++){
        SquareArea=i*i;
        if(RectangleArea%SquareArea==0){
            noSquare=RectangleArea/SquareArea;
            break;
        }
    }
    cout << "Answer : " << noSquare << endl;

    return 0;
}
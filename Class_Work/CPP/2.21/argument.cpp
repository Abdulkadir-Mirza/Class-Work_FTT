//Abdulkadir Mirza --- C++ program that displays use fo default arguments
//The approach taken below is not supported by C and hence this is an advantage of C++
#include<iostream>
using namespace std;

int cubevolume(int l=5,int h=6, int w=7){
    return l*h*w;
}

int main(){
    cout << cubevolume() << endl;
    cout << cubevolume(9) << endl;
    cout << cubevolume(15,12) << endl;
    cout << cubevolume(3,4,7) << endl;

return 0;    
}

//C does not support like this
/*
#include<stdio.h>

int cubevolume(int l=5,int h=6, int w=7){
    return l*h*w;
}

int main(){
    printf("%d\n",cubevolume());
    printf("%d\n",cubevolume(5));
    printf("%d\n",cubevolume(5,5));
    printf("%d\n",cubevolume(5,5,5));
return 0;    
}

It gives this error:
argumentt.c:3:21: error: expected ‘;’, ‘,’ or ‘)’ before ‘=’ token
 int cubevolume(int l=5,int h=6, int w=7){
                     ^
argumentt.c: In function ‘main’:
argumentt.c:8:19: warning: implicit declaration of function ‘cubevolume’ [-Wimplicit-function-declaration]
     printf("%d\n",cubevolume());

*/
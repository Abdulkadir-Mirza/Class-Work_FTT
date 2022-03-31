//Abdulkadir Mirza --- STL in C++
//Algorithm in STL
//replace_copy()
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    char str[] = "I am doing C++ Practice";
    vector<char> v,v2(30);
    int i;
    for(i=0;str[i];i++){
        v.push_back(str[i]);
    }

    cout << "Input sequence:" << endl;
    for(i=0;i<v.size();i++){
        cout << v[i];
    }
    cout << endl;

    replace_copy(v.begin(),v.end(),v2.begin(),' ',':');
    
    cout << "Final Result after Replace_copy:" << endl;
    for(i=0;i<v2.size();i++){
        cout << v2[i];
    }
    cout << endl;

    return 0;
}
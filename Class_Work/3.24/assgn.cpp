#include <deque>
#include <iostream>

using namespace std;

int main()
{
int N,S;
cout << "Enter size of queue and size of subset" << endl;
cin >> N >> S;
deque<int> dq;
deque<int>::iterator t;
int temp;
for(int i=0;i<N;i++) {
cin >> temp;
dq.push_back(temp);
}
t = dq.begin();
deque<int>::iterator f;
while(t != dq.end()) {
    f=t;
        for(int i=0;i<S;i++){
            if(*(f+S-1)!=NULL){
            cout << *(f+i) << " ";
            }
        }
    cout << endl;
    t++;
}

return 0;
}
//Abdulkadir Mirza --- In Class Assignment
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
int sm,lar;
int s[N],l[N],p=0;
int pp=1;
int count=0;
deque<int>::iterator f;
while(t != dq.end()) {
    f=t;
        sm=*f;
        lar=*f;
        for(int i=0;i<S;i++){
            
            if(*(f+S-1)!=NULL){
                count++;
                cout << *(f+i) << " ";
                if((*(f+i))<sm){
                    sm=*(f+i);
                }
                else if((*(f+i))>lar){
                    lar=*(f+i);
                }
            }
            else{
                pp=-1;
            }
        }
    if(pp!=-1){
        s[p]=sm;
        l[p]=lar;
        p++;
    }
    cout << endl;
    t++;
}
cout << "\nOutput" << endl;
count = count /S;
for(int i=0;i<count; i++){
    cout << "[" << s[i] << " " << l[i] << "]" << endl;
}
return 0;
}
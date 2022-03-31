#include<iostream>
#include<deque>
using namespace std;

void showdq(deque<int> g)
{
    deque<int>::iterator it;
    for (it = g.begin(); it != g.end(); ++it)
        cout << '\t' << *it;
    cout << '\n';
}

int main(){
    	int n, s;
    	cin >> n;
    	cin >> s;
    	deque<int> deq;
    	int i,c;
    	for(i=0;i<n;i++){
        	cin >> c;
        	deq.push_back(c);
    	}
	
	int p=0,count=0;
	int arr[n][s];
	for(i=0;i<n-s+1;i++)
	{	
		for(int j=0;j<s;j++){
			int z=i;
			int temp=deq.at(z);
			arr[i][j]=temp;
			z++;
		}
	}
	
    	//showdq(deq);
	for(i=0;i<n-s+1;i++)
	{	
		for(int j=0;j<s;j++){
			
			cout << arr[i][j];
		}
		cout << endl;
	}


    return 0;
}

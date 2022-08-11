#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,x,y;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>x>>y;
	    int k=(x+y)/2;
	    int u=max(abs(k-x),abs(k-y));
	    cout<<u<<endl;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	float t,n,x,y,a,b,d,e;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>n>>x>>y>>a>>b;
	    d=(n*x)/a;
	    e=(n*y)/b;
	    if(d<e)
	    cout<<"PETROL"<<endl;
	    else if(d>e)
	    cout<<"DIESEL"<<endl;
	    else
	    cout<<"ANY"<<endl;
	}
	return 0;
}

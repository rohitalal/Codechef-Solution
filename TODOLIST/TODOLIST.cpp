#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int count=0;
	    for(int u=0;u<n;u++){
	    cin>>a[u];
	    
	    if(a[u]>=1000){
	    count++;
	        
	    }
	        
	    }
	    cout<<count<<endl; 
	}
	   
	
	return 0;
}

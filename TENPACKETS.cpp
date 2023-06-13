#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,cost;
	    cin>>x>>y;
	    if(y>2*x)
	    cost=5*x;
	    else
	    {
	        cost=2*y+1*x;
	    }
	    cout<<cost<<endl;
	    
	}
	return 0;
}
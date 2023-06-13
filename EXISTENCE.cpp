#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long x,y;
	    cin>>x>>y;
	    if(-4*(y*y)==(x*x*x*x)-(4*(x*x)*y))
	           cout<<"Yes"<<endl;
	    else 
	           cout<<"No"<<endl;
	}
	return 0;
}

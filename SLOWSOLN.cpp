#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int maxT,maxN, sumN;
	    cin>>maxT>>maxN>>sumN;
        int rem = sumN % maxN, q = sumN / maxN;
        if (maxT <= q) 
        {
         cout<<(maxT * maxN * maxN)<<endl;
        }
        else
        {
        cout<<(q * maxN * maxN + rem * rem)<<endl;
        }
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 int n;
	 cin>>n;
	 if(n>0 && n<=10)
	    cout<<"Lower Double"<<endl;
	 else if(n>10 && n<16)
	    cout<<"Lower single"<<endl;
	 else if(n>15 && n<=25)
	     cout<<"Upper double"<<endl;
	 else if(n>25 && n<=30)
	     cout<<"Upper single"<<endl;
	}
	return 0;
}

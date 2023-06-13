#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	 int x,a;
	 cin>>x;
	  int y=x%10;
	  if(y>=5)
	      {      a=(x+10)-y;
	         cout<<(100-a)<<endl;
	      }
	       else 
	       {
	           a=x-y;
	           cout<<(100-a)<<endl;
	       }
	  	      
    	}
	return 0;
}

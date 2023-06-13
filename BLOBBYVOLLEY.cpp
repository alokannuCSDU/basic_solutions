#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	  int n, count1=0, count2=0;
	  cin>>n;
	    char str[n];
	     cin>>str;
	     char p='A';
	     for(int i=0; i<n; i++)
	     { 
	         if(str[i]==p)
	           {
	               if(p=='A')
	                  count1++;
	                else 
	                  count2++;
	           }
	         else 
	              { 
	                  p=str[i];
	                   
	              }
	     }
	     cout<<count1<<" "<<count2<<endl;
	}
	return 0;
}

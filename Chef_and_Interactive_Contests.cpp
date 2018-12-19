#include <iostream>

using namespace std;

int main() 
{
	int n,r;
	cin>>n>>r;
	int temp;
	while(n--)
	{
	    cin>>temp;
	    if(temp<r) cout<<"Bad boi"<<endl;
	    else cout<<"Good boi"<<endl;
	}
}

#include <bits/stdc++.h>

typedef long long int ll;

using namespace std;

int main()
{
	ll n,x;
	int t;
	ll arr[50001];
	ll i,j,k,l;
	ll abc,abd,cda,cdb,cd,ab,a,b,c,d,ac,ans;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    i=1;j=2;k=3;l=4;
	    if(n%4==0)
	    {
    	   while(l<=n)
    	    {
        	    cout<<1<<' '<<i<<' '<<j<<' '<<k<<endl<<flush;
        	    cin>>abc;
        	    cout<<1<<' '<<i<<' '<<j<<' '<<l<<endl<<flush;
        	    cin>>abd;
        	    cd=abc^abd;
        	    cout<<1<<' '<<k<<' '<<l<<' '<<i<<endl<<flush;
        	    cin>>cda;
        	    a=cda^cd;
        	    arr[i]=a;
        	    cout<<1<<' '<<k<<' '<<l<<' '<<j<<endl<<flush;
        	    cin>>cdb;
        	    b=cdb^cd;
        	    arr[j]=b;
        	    ab=a^b;
        	    c=abc^ab;
        	    arr[k]=c;
        	    d=abd^ab;
        	    arr[l]=d;
        	    i+=4;
        	    j+=4;
        	    k+=4;
        	    l+=4;
    	   }
	    }
	    else
	    {
	        
	            i=1;j=2;k=3;l=4;
	            cout<<1<<' '<<i<<' '<<j<<' '<<k<<endl<<flush;
        	    cin>>abc;
        	    cout<<1<<' '<<i<<' '<<j<<' '<<l<<endl<<flush;
        	    cin>>abd;
        	    cd=abc^abd;
        	    cout<<1<<' '<<k<<' '<<l<<' '<<5<<endl<<flush;
        	    cin>>cda;
        	    arr[5]=cda^cd;
        	    cout<<1<<' '<<k<<' '<<l<<' '<<6<<endl<<flush;
        	    cin>>cda;
        	    arr[6]=cda^cd;
        	    i=5;j=6;k=7;
        	    while(k<=n)
        	    {
        	        cout<<1<<' '<<i<<' '<<j<<' '<<k<<endl<<flush;
        	        cin>>ans;
        	        arr[k] = (ans^arr[i]^arr[j]);
        	        i++;
        	        j++;
        	        k++;
        	    }
        	    cout<<1<<' '<<i<<' '<<j<<' '<<1<<endl<<flush;
        	    cin>>ans;
        	    a=(ans^arr[i]^arr[j]);
        	    cout<<1<<' '<<5<<' '<<n<<' '<<2<<endl<<flush;
        	    cin>>ans;
        	    b=(ans^arr[5]^arr[n]);
        	    c=abc^a^b;
        	    d=abd^a^b;
        	    arr[1]=a;
        	    arr[2]=b;
        	    arr[3]=c;
        	    arr[4]=d;
        }
	    cout<<2<<' ';
	    for(i=1;i<=n;i++)
	        cout<<arr[i]<<' ';
	   cout<<endl<<flush;
	   cin>>x;
	   if(x==-1)
	    break;
	}
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int n;
    int a,b,c,d,e;
    int arr[1000];
    int x,y;
    int i,j,k,l;
    cin>>t;
    int ans;
    int max;
    while(t--)
    {
        cin>>n;
        memset(arr,0,1000);
        ans=0;
        a=1;b=2;c=3;d=4;e=5;
        i=6;
        while(1)
        {
            cout<<"?"<<' '<<a<<" "<<b<<' '<<c<<' '<<d<<' '<<e<<endl<<flush;
            cin>>x>>y;
            arr[x]=1;
            arr[y]=1;
            max=y;
            if(a==x) a=i;
            if(b==x) b=i;
            if(c==x) c=i;
            if(d==x) d=i;
            if(e==x) e=i;
            if(i>n) 
                break;
            i++;
        }
        a=b=c=d=e=0;
        c=max;
        j=k=l=0;
        for(i=1;i<=n;i++)
        {
            if(arr[i]==0)
            {
                if(j==0) 
                    j=i;
                else if(k==0) 
                    k=i;
                else if(l==0) 
                    l=i;
                
            }
            else if(arr[i]==1 and i!=max)
            {
                if(e==0) e=i;
                else if(d==0) d=i;
                
            }
            
        }
        cout<<"?"<<' '<<j<<' '<<k<<' '<<max<<' '<<d<<' '<<e<<endl<<flush;
        cin>>x>>y;
        if(y==max)
        {
            cout<<"?"<<' '<<k<<' '<<l<<' '<<max<<' '<<d<<' '<<e<<endl<<flush;
            cin>>x>>y;
            if(y==max) ans=k;
            else ans=j;
        }
        else
        {
            ans=l;
        }
        cout<<"!"<<' '<<ans<<endl<<flush;
   }
}

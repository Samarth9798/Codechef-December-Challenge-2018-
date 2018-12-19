#include <bits/stdc++.h>

using namespace std;

int points=1000; //maximum points

void search(int lower,int higher,int c) //search function for n greater than 1000 
{
    int y;
    int x;
    int frac=2;
    int a;
    int i,j,prev;
    for(i=1;i<20;i++)
    {
        a = lower + (higher - lower)/frac;
        frac = frac * 2;
        if(a < 300)
        {
            break;
        }
    }
    lower=1;
    y=lower + (higher - lower)/2;
    cout<<1<<' '<<y<<endl<<flush;
    cin>>x;
    if(x==0)
    {
    	lower = y + 1;
    }
    else if(x==1)
    {
    	cout<<2<<' '<<endl<<flush;
    	higher = y;
    	
    }
    while((higher - lower)>a)
    {
          y=lower + a;
          points--;
          cout<<1<<' '<<y<<endl<<flush;
          cin>>x;
          if(x==0)
          {
            lower = y + 1;
          }
          else
          {
            points-=c;
            cout<<2<<endl<<flush;
            higher = y;
          }

    }
    if(lower==higher)
    	cout<<'3'<<' '<<higher<<endl<<flush;
    else
    {
	      y = lower + (higher - lower)/2;
        cout<<'1'<<' '<<y<<endl<<flush;
        cin>>x;
        if(x==0)
        {
        	        y++;
        	        cout<<'1'<<' '<<y<<endl<<flush;
        	        label5:cin>>x;              //label 5
        	        if(x==0)
        	        {
        	            y++;
        	            cout<<'1'<<' '<<y<<endl<<flush;
        	            goto label5;                

        	        }
        	        else if(x==1)
        	        {
        	            cout<<'2'<<endl<<flush;
        	            cout<<'3'<<' '<<y<<endl<<flush;
        	        }
        	        else if(x==-1)
        	        {
        	        	y++;
        	        	goto label5;
        	        }
        	        
        }
        else
        {
    	            cout<<'2'<<endl<<flush;
        	        y=lower;
        	        cout<<'1'<<' '<<y<<endl<<flush;
        	        label6:cin>>x;              //label 6
    	            	if(x==0)
        	        {
        	            y++;
        	            cout<<'1'<<' '<<y<<endl<<flush;
        	            goto label6;                

        	        }
        	        else if(x==1)
        	        {
        	            cout<<'2'<<endl<<flush;
        	            cout<<'3'<<' '<<y<<endl<<flush;
        	        }
        	        else if(x==-1)
        	        {
        	        	y++;
        	        	goto label6;
        	        }
	      }
	  }
}

int main() 
{
	int n,c;
	int x,y;
	cin>>n>>c;
	if(n<=1000)     //when n is less than  or euqals to 1000
	{
	    y=n/2;
	    cout<<1<<' '<<y<<endl<<flush;
	    cin>>x;
	    if(x==0)
	    {
    	        y++;
    	        cout<<1<<' '<<y<<endl<<flush;
    	        label1:cin>>x;      //label 1
    	        if(x==0)
    	        {
    	            y++;
    	            cout<<1<<' '<<y<<endl<<flush;
    	            goto label1;

    	        }
    	        else
    	        {
    	            cout<<2<<endl<<flush;
    	            cout<<3<<' '<<y<<endl<<flush;
    	        }
	    }
	    else
	    {
	            cout<<2<<endl<<flush;
    	        y=1;
    	        cout<<1<<' '<<y<<endl<<flush;
    	        label2:cin>>x;      //label 2
	            if(x==0)
    	        {
    	            y++;
    	            cout<<1<<' '<<y<<endl<<flush;
    	            goto label2;

    	        }
    	        else
    	        {
    	            cout<<2<<endl<<flush;
    	            cout<<3<<' '<<y<<endl<<flush;
    	        }
        }

	}
	else        //when n is greater than 1000
	{
	   search(1,n,c);
	}
}

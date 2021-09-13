#include "iostream"
#include "map"
#include "vector"
#include "string"
#include "cstring"
#include "stack"
#include "algorithm"
using namespace std;
typedef long long ll;
 int sum = 0;
int summation(vector<int> &a)
{
     for(int i = 1 ; i<=a.size();i+=2)
       {
           sum = sum + a[i+1] - a[i];
       }
       return sum;
}

int main()
{
    int t,n,k; 
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        int count=0,count1=0;
       
        for(int i=1;i<=a.size();i++)
        {
            cin>>a[i];
            if(a[i] == 0)
            {
                count++;
            }
            else
            {
                count1++;
            }
        }
        cout<<"count "<<count<<"\n";
        cout<<"count1 "<<count1<<"\n";
        int x = summation(a);
        if(count == count1 && x == 0)
        {
            k = a.size();
            cout<<k<<"\n";
            for(int i=1;i<=a.size();i++)
            {
                cout<<a[i]<<" ";
            }
        }
        else 
        {
            n = a.size()/2;
            k = n;
            vector<int> b(k+1);
            
            for(int i=k+1 ; i<=a.size() ; i++)
            {
                cin>>b[i];
            }
            int y = summation(b);
            if( y == 0)
            {
                cout<<k<<"\n";
                for(int i=k+1 ; i<=a.size() ; i++)
                {
                    cout<<a[i]<<" ";
                }
            }
            else
            {
                k = n-1; 
            }
            
        }
        cout<<"\n";
        


    }
}
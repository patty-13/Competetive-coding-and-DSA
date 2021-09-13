#include "iostream"
#include "string"
#include "math.h"
#include "algorithm"
#include "vector"
#include "map"
using namespace std;
typedef long long ll;
int main()
{
    int t,n,pro=1;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        vector<int> c(n);
        for(int i = 1; i<=a.size(); i++)
        {
            cin>>a[i];
             if(a[i]>=0)
            {
                b.push_back(a[i]);
                sort(b.begin()+1,b.end()+1);
            }
            else
            {
                c.push_back(a[i]);
                sort(c.rbegin()+1,c.rend()+1);
            }
        }
        if( n == 5)
        {   for(int i = 1 ; i<=n ; i++)
            pro = pro*a[i];
            int x =pro;
        }
        for(int i = 1; i<=a.size(); i++)
        {
           
            
        }
        
        
    }
}
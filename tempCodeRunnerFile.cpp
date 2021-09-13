#include "iostream"
#include "vector"
#include "algorithm"
#include "map"
#include "math.h"
#include "string"
#include "stack"
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,a,b,c,d;
    cin>>t;
    while(t--)
    {
     
        cin>>a>>b>>c;
        if(c-b == b-a == c-a)
        {
            d = c+1;
        }
        else
        {
            d = c+b/2;
        }
        cout<<d<<"\n";
        
    }
}
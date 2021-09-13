#include "iostream"
#include "map"
#include "vector"
#include "string"
#include "math.h"
#include "algorithm"
using namespace std;
typedef long long ll;
const int MAX_N = 1e5+1;
const int MOD = 1e9 + 7;
const int INF = 1e9;
const ll LINF = 1e18;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // PROBLEM 1 PLUS MINUS
    // int x,y,a,b;
    // cin>>a>>b;
    // x = (a+b)/2;
    // y = a-x;
    // cout<<x<<" "<<y<<"\n";
    //PROBLEM 2
    string s;
    int n,count=0;
    cin>>n>>s;
    for(int i = 0; i< n ; i++)
    {
        if((s[i] == 'A' && s[i+1] == 'T' )|| (s[i] == 'T' && s[i+1] == 'A' ))
        {
            count++;
        }
        else if((s[i] == 'C' && s[i+1] == 'G') || (s[i] == 'G' && s[i+1] == 'C' ))
        {
            count++;
        }
        else
        {
            continue;
        }
        
    }
    cout<<count+1<<"\n";
    
    //PROBLEM-3
    // int n,a,b;
    // cin>>n;
    // while(n--)
    // {
    //     cin>>a>>b;

    // }

    //PROBLEM - 4
    // int n,k,m,x;
    // cin>>n>>k>>m;
    // while(n--)
    // {

    // }

    // PROBLEM -6
    // int n;
    // cin>>n;
    // vector<int> a(n);
    // for(int i =0 ; i < n ; i++)
    // {
    //     cin>>a[i];
    // }
}
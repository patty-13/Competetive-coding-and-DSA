#include "iostream"
#include "vector"
#include "algorithm"
#include "math.h"
#include "iomanip"
using namespace std;
typedef long long ll;
int main()
{
    int n,count=0;
    ll  x=0,x1=0;
    cin>>n;
    vector<int> a(n);
    for(int i =0 ; i < n;i++)
    {
        cin>>a[i];
        x = x + abs(a[i]); 
        x1 = x1 + pow(a[i],2);
    }
    cout<<x<<"\n";
    cout<<fixed<<setprecision(15)<<sqrt(x1)<<"\n";
    cout<<abs(*max_element(a.begin(),a.end()))<<"\n";

    // for(int i = 1,j=0;i< sqrt(n) ;i++)
    // {
    //     if(n%i==0)
    //     {
    //         a[j] = i;
    //         a[j+1] = n/i;
    //         j+=2;   
    //         count++;
    //     }
      
        
        
    // }
    // sort(a.begin(),a.end());
    // for(int i =0 ;i<a.size();i++)
    // {
    //     cout<<a[i]<<"\n";
    // }

}
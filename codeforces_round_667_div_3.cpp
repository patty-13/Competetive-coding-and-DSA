#include "iostream"
#include "algorithm"
#include "map"
#include "string"
#include "vector"
using namespace std;
typedef long long ll;
int main()
{
    // int t,a,b;
    // cin>>t;
    // while(t--)
    // {
    //     int count = 0,k=10,x,m=10;
    //     cin>>a>>b;
    //     if(b>a)
    //     {
    //         swap(a,b);
    //     }
    //     if(a == b)
    //     {
    //         count = 0;
    //     }
    //     else if(a%2==0 && b%2==0)
    //     {
    //             while(a>b)
    //             {
    //                 a= a -k;
    //                 count++;
    //                 if(a-b>=m)
    //                 {
    //                     m = k;
    //                  }
    //                 else
    //                 {
    //                     k= k - 2;
    //                 }
                
    //             }  
    //     }
    //     else 
    //     {
    //         while(a>b)
    //         {
    //             a = a -k;
    //             count++;
    //             if(a-b>=m)
    //             {
    //                 m = k;
    //             }
    //             else
    //             {
    //                 k--;
    //             }

    //         }  
    //      } 
    //     cout<<count<<"\n";
    // }
    ll T=1;
        cin>>T;
        while(T--)
        {
           
           ll a,b;
           cin>>a>>b;
           ll num=abs(b-a);
            
           ll k=num/10;
           if(num%10!=0) k++;
 
           cout<<k<<endl;

        }
    
}
#include "iostream"
#include "unordered_map"
#include "algorithm"
#include "map"
#include "vector"
#include "string"
#include "math.h"
#include "cstring"
#include "stack"
#include "queue"
using namespace std;
int main()
{
    int t,n,b,sum =0, best = 0,s1;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i = 0 ; i < a.size() ; i++)
        {
            cin>>a[i];
        }
        for(int i =0 ;i < b.size() ; i++)
        {
            cin>>b[i];
        }
        for(int i =0,j =0 ; i< a.size()-1 ; i++)
        {
            if(a[i]<=a[i+1] && b[j]>=b[j+1])
            {
                sum++;
                best = max(best,sum);
            }
            else
            {

                i++;
                j++;
                sum = 0;
            }
        }
        cout<<sum+1<<"\n";

        // cin>>n>>b;
        // vector<int> a(n);
        // for(int i =0 ; i< a.size() ; i++)
        // {
        //     cin>>a[i];
        // }
        // for(int i =0 ; i<a.size() ;i++)
        // {
        //     if(a[i]>=b)
        //     {
        //         continue;
        //     }
        //     else
        //     {
        //         sum = max(a[i],a[i]+sum);
        //         best = max(best,sum);
        //         if(best<b)
        //         {
        //             s1 = best;
        //         }
        //     }
        // }
        // cout<<s1<<"\n";

    }
}
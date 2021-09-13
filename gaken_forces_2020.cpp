#include "iostream"
#include "algorithm"
#include "map"
#include "vector"
#include "string"
#include "cstring"
#include "stack"
using namespace std;
typedef long long ll;
int main()
{
    int t,n,x;
    string s;
    cin>>t;
    while(t--)
    {
        
        cin>>n;
        vector<int> a(n);
        vector<int> b(3*n);
        vector<int>::iterator ip;
        
        for(int i = 0 ; i < n ; i++)
        {
            cin>>a[i];
        }
        for(int i = 0 ; i < n ; i++)
        {
            cin>>x;
            a.push_back(x);

        }
        for(int i = 0 ; i < n ; i++)
        {
            cin>>x;
            a.push_back(x);   
        }
        sort(a.begin(),a.end());
        for(int i = 0,j=0 ; i < 3*n; i++)
        {
           
            if(a[i] == a[i+1])
            {
                //cout<<"a:"<<a[i]<<" ";
                continue;
            }
            else
            {
                b[j]=a[i];
                j++;      
            }
        }
        int count = 0;
        for(int i = 0 ; i < n ; i++)
        {
            if(b[i] == 0)
            {
                i = 0;
                n = n - count;
                count = 0;
            }
            count++;
            cout<<b[i]<<" ";
        }
       
        cout<<"\n";
        
    }
}

// PROBLEM -2
// #include "iostream"
// #include "algorithm"
// #include "map"
// #include "vector"
// #include "string"
// #include "cstring"
// #include "stack"
// using namespace std;
// typedef long long ll;
// int main()
// {
//     int t,n,x;
//     string s;
//     cin>>t;
//     while(t--)
//     {
        
        
//     }
// }






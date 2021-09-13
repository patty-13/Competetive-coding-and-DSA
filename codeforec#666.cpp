#include "iostream"
#include "string"
#include "vector"
#include "algorithm"
#include "map"
#include "cstring"
#include "unordered_map"
#define SIZE 26
using namespace std;
typedef long long ll;
int main()
{
    int t,n,freq[SIZE],size=0,odd=0,even=0;
    string s;
    cin>>t;
    while(t--)
    {
        int sum = 0;
        odd =0;
        even = 0;
        map<char,int> m;
        map<char,int>::iterator itr;
        //memset(freq,0,sizeof(freq));
        cin>>n;
        int n1 = n;
        for(int i=0;i<n;i++)
        {
            
            cin>>s;
            sort(s.begin(),s.end());

            for(long i=0; i<s.size();i++)
            {
                m[s[i]]++;
            }
            
        }
         for(itr = m.begin() ;itr!=m.end();itr++)
            {
                // cout<<itr->first<<" "<<itr->second<<"\n";
                if(itr->second%2==0 )
                {

                    even++;
                }
                else
                {
                    odd++;
                }
                
            }
       
        if(odd == 0 || even == 0)
        {
            cout<<"YES"<<"\n";
        }
        else if(odd>=1)
        {
            cout<<"NO"<<"\n";
        }
       
    }
}
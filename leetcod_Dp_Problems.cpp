/*
    Q.1 Longest Palindromic substring 
    Given a string s, find the longest palindromic substring in s. 
    You may assume that the maximum length of s is 1000.
*/
/*
    Method 1. brute force.
*/
#include "iostream"
#include "algorithm"
#include "map"
#include "vector"
#include "string"
#include "cstring"
using namespace std;
int main()
{
    string s;
    vector<string> a;
    int len=0,temp;
    cin>>s;
    for(int i=0; i < s.size() ;i++)
    {
        for(int j =i+1 ; j<s.size() ; j++)
        {
            for(int k=i,m=j; k<=j ; k++,m--)
            {
                a[m] = s[k];
                len = j - i ;
                cout<<s[k];
            }
            cout<<a.size();
           for(int l = 0 ; l < a.size() ; l++)
           {
               cout<<"s1 : "<<a[l];
               if(s[l] != a[l])
               {
                   break;
               }
               else
               {
                   cout<<"p string is:"<<a[l];
               }
           }
            cout<<"\n";
           
        }
        
        
    }
}
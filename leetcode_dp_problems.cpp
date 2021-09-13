/*
    Problem 1. Longest Palindromic Substring
    Given a string s, find the longest palindromic substring in s. 
    You may assume that the maximum length of s is 1000.
    Input: "babad"
    Output: "bab"
    Note: "aba" is also a valid answer.
*/
#include "iostream"
#include "string"
#include "vector"
#include "algorithm"

using namespace std;
typedef long long ll;
long soltn(vector<ll> a,ll n)
{
    vector<int> b;
    int count=0;
    for(int i =0;i<n;i++)
    {
        int num = a[i];
    for(int j=2;j<n/2;j++)
    {
        if(num%j==0)
        {
            continue;
        }
        else
        {
            b.push_back(i);   
        }
    }
    }
    for(int i=0;i<b.size();i++)
    {
        cout<<b[i]<<" ";
    }
    for(int i=0;i<b.size();i++)
    {
        if(b[i+1]-b[i] == 1)
        {
            count++;
        }
        cout<<count<<"\n";
    }
    cout<<count<<"\n";
    return count ;
}
int main()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    } 
    cout<<soltn(a,n);
    
}
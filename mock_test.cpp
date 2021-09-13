#include "iostream"
#include "vector"
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<char> a(n);
    bool same;
    for(int i =0 ; i<a.size() ; i++)
    {
        cin>>a[i];
    }
    for(int i= 0,j=a.size() ; i<=a.size()/2 ; i++,j--)
    {
        cout<<a[i]<<" "<<a[j];
        cout<<"\n";
        if(a[i]==a[j])
        {
            same = true;
        }
        else
        {
            same =false;
            break;
        }
    }
    cout<<same;
    if(same)
    {
        cout<<"PALINDROME";
    }
    else
    {
        cout<<"Not PALINDROME";
    }
}
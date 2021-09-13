// #include "iostream"
// #include "algorithm"
// #include "string"
// #include "map"
// #include "vector"
// #include "stack"
// #include "queue"
// using namespace std;
// typedef long long ll;
// int main()
// {
//     int N,X,T,time=0;
    
//     cin>>N>>X>>T;
    
//     while(N>0)
//     {
//         N = N-X;
//         time=time+T;
//     }
//     cout<<time;

// }
// #include "iostream"
// #include "algorithm"
// #include "string"
// #include "map"
// #include "vector"
// #include "stack"
// #include "queue"
// using namespace std;
// typedef long long ll;
// string soltn(ll n)
// {
//     if(n==0 || n==9)
//     {
//         return "Yes";
//     }
//     if(n < 9)
//     {
//         return "No";

//     }
//     return soltn((ll)(n >> 3) - (ll)(n & 7));

// }
// int main()
// {
//     ll N,time=0;
    
//     cin>>N;

//     cout<<soltn(N);
    
//     // while(N>0)
//     // {
//     //     int a = N%10;
//     //     time=time+a;
//     //     N=N/10;
//     // }
//     // if(time%9==0)
//     // {
//     // cout<<"Yes";
//     // }
//     // else
//     // {
//     //     cout<<"No";
//     // }
    

 //}
#include "iostream"
#include "algorithm"
#include "string"
#include "map"
#include "vector"
using namespace std;
typedef long long ll;
// ll max(ll b, ll c)
// {
//    return (b>c)?b:c;
// }
int main()
{
   ll n,s,count=0;
   cin>>n;
   vector<ll> a(n);
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }
   for(int i=1;i<n;i++)
   {
       if(a[i]<a[i-1])
       {
        //    cout<<"i value :"<<i<<endl;
        //    cout<<"array value :"<<a[i]<<endl;
         //  s = max(0LL,a[i]-a[i+1]);
           int d = a[i-1] - a[i];
            a[i] +=d;
           //count = count+s;
           count+=d;
           //a[i+1] = a[i+1]+ s; 
        //    cout<<"s value :"<<count<<"\n";
        //    cout<<"array value new :"<<a[i+1]<<"\n";
           
       }
    //    else
    //    {
    //     //    cout<<"skip value"<<a[i]<<"\n";
    //        continue;
    //    }
       

   }
    cout<<count;        


}


// #include "iostream"
// #include "algorithm"
// #include "string"
// #include "vector"
// #include "queue"
// using namespace std;
// typedef long long ll;
// int main()
// {
//     ll n;
//     cin>>n;
//     vector<ll> a(n);
//     queue<ll> q;
//     for(int i=0;i<3*n;i++)
//     {
//         cin>>a[i];
//     }
//     for(int i=1;i<n-1;i++)
//     {
//     random_shuffle(a.begin(),a.end()+4);
//     for(int j =0;j<3*n;j++)
//     {
//         q.push(a[j]);
//         for(int i=0;i<)
//     }
    
//     // for(int i=0;i<3*n;i++)
//     // {
//     //     cout<<a[i];
//     // }
//     }
// }
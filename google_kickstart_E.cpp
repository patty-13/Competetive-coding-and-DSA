/*
    Problem 1.
*/
// #include "iostream"
// #include "map"
// #include "vector"
// #include "string"
// #include "algorithm"
// #include "stack"
// #include "queue"
// using namespace std;
// typedef long long ll;
// void soltn()
// {
//     ll n,count=0;
//     int new_count;
//     cin>>n;
//     vector<ll> a(n);
//     vector<ll> diff(n),new_a(n);
//     for(int i=0;i<n;i++){ cin>>a[i];}
//     for(int i=0;i<n-1;i++)
//     {   
        
//         diff[i] = a[i+1]-a[i];
        
//     }
    
//     for(int i=0;i<diff.size()-1;i++)
//     {
        
//         if(diff[i]==diff[i+1])
//         {
//             count++;
//            new_a[i]=count;
           
//         }
//         else
//         {
//             count =0;
//             continue;
//         }
         

//     }
//     new_count = *max_element(new_a.begin(),new_a.end());
//     cout<<new_count+2;


// }
// int main()
// {
//     int t;
//     cin>>t;
//     for(int i=0;i<n;i++)
//     {
//         cout<<"Case #"<<t<<":";
//         soltn();

//     }
// }
/*
    Problem 2.
*/

#include "iostream"
#include "map"
#include "vector"
#include "string"
#include "algorithm"
#include "stack"
#include "queue"
using namespace std;
typedef long long ll;
void soltn()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;
    vector<ll> a(n);
    if((a==b==n)!=c)
    {
        cout<<"IMPOSSIBLE"<<"\n";
    }
    else if(a==b)
    {
        for(int i=1;i<=n;i++)
        {
            
        }
    }
    

}
int main()
{
    int t;
    cin>>t;
    for(int i =1;i<=t;i++)
    {
        cout<<"Case #"<<i<<": ";
        soltn();
    }
}




/*
    Problem 3.
*/



// #include "iostream"
// #include "map"
// #include "vector"
// #include "string"
// #include "algorithm"
// #include "stack"
// #include "queue"
// using namespace std;
// typedef long long ll;
// void soltn()
// {

// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         cout<<"Case #"<<t<<":";
//         soltn();

//     }
// }
/*
    Problem 4.
*/
// #include "iostream"
// #include "map"
// #include "vector"
// #include "string"
// #include "algorithm"
// #include "stack"
// #include "queue"
// using namespace std;
// typedef long long ll;
// void soltn()
// {

// }
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         cout<<"Case #"<<t<<":";
//         soltn();

//     }
// }
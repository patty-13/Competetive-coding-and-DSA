#include "iostream"
#include "vector"
#include "map"
#include "math.h"
using namespace std;
void sieve(bool isPrime[], int n)
{
    int a[1000],k=0;
    for(int i=2 ; i<= n; i++)
    {
        if(isPrime[i] == true)
        {
            for(int j = i*i; j<=n ; j=j+i )
            {
                isPrime[j] = false;
            }
           cout<<i<<"\n";
        }
       
    }
    
    
}
int main()
{
    
    int n;
    cin>>n;
    bool isPrime[100000];
    for(int i = 2; i< n ; i++)
    {
        isPrime[i]= true;
    }
     sieve(isPrime,n);
    
}
// int main()
// {
//     int n;
//     cin>>n;
//     while(n--)
//     {
//         int t;
//         cin>>t;
//         int sum =0 ;
//         for(int i = 1; i < t ; i++)
//         {
//             if(t%i == 0)
//             {
//                 sum = sum + i;
//             }
//         }
//         if(sum == t)
//         {
//             cout<<"YES"<<"\n";
//         }
//         else
//         {
//             cout<<"NO"<<"\n";
//         }
        

//     }
// }
/*
   A. Omkar and the password
   Lord Omkar has permitted you to enter the Holy Church of Omkar! To test your worthiness, Omkar gives you a password which you must interpret!

A password is an array a of n positive integers. You apply the following operation to the array: pick any two adjacent numbers that are not equal to each other and replace them with their sum. Formally, choose an index i such that 1≤i<n and ai≠ai+1, delete both ai and ai+1 from the array and put ai+ai+1 in their place.

For example, for array [7,4,3,7] you can choose i=2 and the array will become [7,4+3,7]=[7,7,7]. Note that in this array you can't apply this operation anymore.

Notice that one operation will decrease the size of the password by 1. What is the shortest possible length of the password after some number (possibly 0) of operations?

Input
Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤100). Description of the test cases follows.

The first line of each test case contains an integer n (1≤n≤2⋅105) — the length of the password.

The second line of each test case contains n integers a1,a2,…,an (1≤ai≤109) — the initial contents of your password.

The sum of n over all test cases will not exceed 2⋅105.

Output
For each password, print one integer: the shortest possible length of the password after some number of operations.

 */
// #include "iostream"
// #include "algorithm"
// #include "vector"
// #include "map"
// using namespace std;
// void soltn(int a[],int n2)
// {
//     int count = 0;
//     for(int i =0 ;i<n2;i++)
//     {
//         bool check = false;
//         if(a[i] != a[i+1])
//         {
//             check = true;
//         }
//         else
//         {
//             continue;
//         }
        
        
//     }
//     for(int i =0;i<n2;i++)
//     {
//         cout<<a[i]<<" ";
//     }
// }
// int main()
// {
//      int n,n1;
// int a[1000];
//     cin>>n;
//     while(n--)
//     {
//         cin>>n1;
//         for(int i=0;i<n1;i++)
//         {
//             cin>>a[i];
//             soltn(a,n1);
//         }
//     }
// }
// int main()
// {
    
    // int t,i,n;
    // cin>>t;
    // while(t--)
    // {
    //     cin>>n;
    //     vector<int> a(n);
    //     map<int,int> mp;
    //     for(int i=0;i<n;i++)
    //     {
    //         cin>>a[i];
    //         mp[a[i]]++;
    //     }
    //     int ans=1;
    //     if(mp[a[0]]==n)ans=n;
    //     cout<<ans<<"\n";
    // }
//     // return 0;
//     #include "iostream"
// #include "vector"
// using namespace std;
// typedef long long ll;
// int main()
// {
//     int t,n,x;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n;
//         int A[n];
//         for(int i=0;i<n;i++)
//         {
//             cin>>A[i];
//            // A.push_back(x);
//         }
//         for(auto i=A.begin();i<A.end();i++)
//         {
//             cout<<*i;
//         }
//     bool same =true;
//     for(int i =0 ;i<n;i++)
//     {
//         if(A[i]!=A[0]) same=false;
        
//     }
//     cout<<same?n:1;
//     }
//}
// }

/*
    Omkar and the infinity clock
*/
// #include "iostream"
// #include "string"
// #include "vector"
// #include "map"
// #include  "algorithm"
// using namespace std;
// typedef long long ll;
// int main()
// {
//     ll n,k,t,d,d1;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n>>k;
//        vector<ll> a(n);
//         for(int i = 0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         d = *max_element(a.begin(),a.end());
//         d1 = *max_element(a.begin(),a.end(),greater<>());
//         if(k%2)
//         {
//             for(auto &t : a)
//             {
//                 cout<<d-t<<" ";
//             }
//         }
//         else
//         {
//             for(auto &t :a)
//             {
//                 cout<<t-d1<<" ";
//             }
//         }
//         cout<<"\n";
        
//     }
// }
// #include "iostream"
// #include "string"
// #include "vector"
// #include "map"
// #include "algorithm"
// #include "math.h"
// using namespace std;
// typedef long long ll;
// int main()
// {
//     ll t;
//     ll n;
    
//     cin>>t;

//     while(t--)
//     {
        
//         cin>>n;
//         vector<ll> a(n);
        
//         for(auto &j : a)
//         {
//             cin>>j;
//         }
//         ll ans = 0;
//         for(int i=1;i<n;i++)
//         {
//             ans = ans + max(0LL,a[i-1]-a[i]);
//         }
//         cout<<ans<<"\n";
//     }
// }

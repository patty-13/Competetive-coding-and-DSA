// #include "iostream"
// using namespace std;
// int main()
// {
//     int d,t,s;
//     cin>>d>>t>>s;
//     int d1 = s*t;
//     string x = (d<=d1)?"Yes":"No";
//     cout<<x;
// }
// #include "iostream"
// #include "string"
// #include "vector"
// #include "algorithm"
// using namespace std;
// int main()
// {
//     int x,m=0;
//     string s,t;
//     cin>>s;
//     cin>>t;
//     int l1 = s.size();
//     int l2 = t.size();
//     for(int i=0; i<1+s.size()-t.size(); i++)
//     {
//         int count = 0;
//         for(int j=0; j<t.length(); j++)
//         {
//                 if(s[i+j] != t[j])
//                 {
//                     count++;
//                 }
//         }
//         l2 = min(l2,count);
//     }
//     cout<<l2<<"\n";
// }
// #include "iostream"
// #include "algorithm"
// #include "vector"
// using namespace std;
// typedef long long ll;
// void soltn(vector<int> &a,int s,int e)
// {
//     if(e == a.end())
//     {
//         return;
//     }
//     if(s>e)
//     {
//         soltn(a,s,e+1);
//     }
//     else
//     {
//         for(int i=s;i<e;i++)
//         {

        
//         }
//         soltn(a,s+1,e);
//     }
    
// }
// int main()
// {
//         ll n;
//         cin>>n;
//         vector<ll> a(n);
//         for(int i =0; i<n;i++)
//         {
//             cin>>a[i];
//         }
//         soltn(a,0,0);

// }
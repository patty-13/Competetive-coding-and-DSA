/*
    Practice questions for gocc + topics and practice.
    hash maps, priorty queue, trees, segment trees, bst, graphs, dfs,bfs
    strings questions and arrays sub array, dp.
*/
/*
    SUBSET PROBLEM
*/
// #include "iostream"
// #include "algorithm"
// #include "vector"
// #include "string"
// #include "math.h"
// using namespace std;

// int main()
// {
//     int t,n,len_min=1,bit_or=0,count=1,count1=0,best=0,x,best1=1,sum=0;
//     cin>>t;
//     while(t--)
//     {
//         cin>>n;
//         vector<int> a(n);
//         for(int i=0;i<n;i++)
//         {
//             cin>>a[i];
//         }
//         for(int i=0;i<n;i++)
//         {
//             sum  = max(a[i],sum|a[i]);
//             best = max(best,sum);
//         }
//         for(int j = 0;j<=pow(2,n);j++)
//         {
//             bit_or = 0;
//             for(int i=0;i<=n;i++)
//             {
                
//                 if(j&(1<<i))
//                 {
//                     cout<<a[i]<<" ";
//                     bit_or = bit_or|a[i];
//                     count1++;
//                     if()
//                     {

//                     }     
//                 }
//                 else
//                 {
//                     continue;
//                 }
//             }
                  
//             cout<<"best "<<bit_or<<"\n";
//             cout<<"\n";
//         }
        
//     }
// }

/*
    Question 2.
*/
// #include "iostream"
// #include "algorithm"
// #include "string"
// #include "vector"
// #include "math.h"
// using namespace std;
// struct node
// {
//     int data;
//     node* left;
//     node* right;
// };
// node* new_node(int data)
// {
//     node* Node = new node();
//     Node->data = data;
//     Node->left = NULL;
//     Node->right = NULL;

// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int> a(n);
//     for(int i =0;i<n;i++)
//     {
//         cin>>a[i];
//     }
  
// }
// #include "iostream"
// #include "algorithm"
// #include "string"
// #include "map"
// #include "vector"
// using namespace std;
// int n;
// vector<int> g[10000+5];
// int val[10000+5];
// int vis[10000+5]={0};
// int ans[10000+5]={100};
// vector<int>inside;
// int gcd(int a,int b)
// {
//     if(a==0)
//     {
//         return b;
//     }
//     if(b==0)
//     {
//         return a;
//     }
//     if(a == b)
//     {
//         return a;
//     }
//     if(a>b)
//     {
//         return gcd(a-b,b);
//     }
//     else
//     {
//         return gcd(a,b-a);
//     }
    
// }

// void dfs(int v,vector<int>& inside){

//    vis[v]=1;
//    int in=inside.size();
//    cout<<"size "<<in<<"\n";
//    int flag=1;
//    for(int i=in-1;i>=0;i--){
//         cout<<"value [v] "<<val[v]<<" value inside"<<val[inside[i]]<<"\n";
//         if(gcd(val[v],val[inside[i]])==1){
            
//             ans[v]=inside[i];
//             flag=0;
//             break;
//         }
//    }
//    if(flag){
//       ans[v]=-1;
//    }

//    inside.push_back(v);
//    for(int i=0;i<g[v].size();i++){
//        if(vis[g[v][i]]==0)
//             dfs(g[v][i],inside);
//    }
//    inside.pop_back();
// }


// int main(){

//     cin>>n;

//     for(int i=1;i<=n;i++){
//        int x;
//        cin>>x;
//        val[i]=x;
//     }

//     for(int i=1;i<=n-1;i++){
//         int x,y;
//         cin>>x>>y;
//         g[x].push_back(y);
//         g[y].push_back(x);
//     }
//     dfs(1,inside);

//     for(int i=1;i<=n;i++){
//         cout<<ans[i]<<" ";
//     }
//     cout<<endl;
// }

// #include "iostream"
// #include "vector"
// #include "string"
// #include "algorithm"
// using namespace std;
// int main()
// {
//     int n,q,pos,value;
//     string s;
//     cin>>n;
//     vector<int> a(n);
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     cin>>q;
//     while(q--)
//     {
//         if(cin>>s)
//         {
//             if(s=="Left")
//             {
//                 rotate(a.begin(),a.begin()+1,a.end());
//             }
//             if(s=="Right")
//             {
//             rotate(a.begin(),a.begin()+a.size()-1,a.end());
//             }
//         }
//         else if(cin>>s>>pos)
//         {
//             if(s=="Increment")
//             {
//                 for(int i=0;i<a.size();i++)
//                 {
//                     if(a[i] == pos)
//                     {
//                         a[i] = a[i]+1;
//                     }
//                 }
//                  for(int i=0;i<a.size();i++)
//                 {
//                     cout<<a[i]<<" ";
//                 }
//                 cout<<"\n";
//             }
//             else if(s == "?")
//             {
//                for(int i=0;i<a.size();i++)
//                {
//                    if(a[i] == pos)
//                    cout<<a[i]<<"\n";
//                }
//             }
            
//         }
//         else if(cin>>s>>pos>>value)
//         {
//             if(s == "Update")
//             {
//                 for(int i=0;i<a.size();i++)
//                 {
//                     if(a[i] == pos)
//                     {
//                         a[i] = value;
//                     }
//                 }
//             }
//         }
        
//     }
// }

#include "iostream"
#include "vector"
using namespace std;
// void sub_array(vector<int> &a, int s,int e)
// {
//     if(e == a.size())
//     {
//         return;
//     }
//     if(s>e)
//     {
//         sub_array(a,s,e+1);
//     }
//     else
//     {
        
//         sub_array(a,s+1,e);
//     }
    
// }
int main()
{
    int t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        vector<int> a(n);
        for(int i = 0;i<n;i++)
        {
            cin>>a[i];
        }

        for(int i=0 ; i< n;i++)
        {
            for(int j=i+1 ; j<n ;j++)
            {
                
            }
        }




    }
}
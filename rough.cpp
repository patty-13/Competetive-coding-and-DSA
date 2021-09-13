// #include "iostream"
// using namespace std;
// int main()
// {
//     // int n,count=0,count1=0;
//     // cin>>n;
//     // for(int i=0;i<n+1;i++)
//     // {
//     //     for(int j =0;j<n+1-i;j++)
//     //     {
//     //         cout<<i<<j<<" ";
//     //         count++;
//     //     }
//     //     count1++;
//     //     cout<<"\n";

//     // }
//     // cout<<count<<" "<<count1;

// }
// #include "iostream"
// #include "vector"
// #include "algorithm"
// #include "math.h"
// using namespace std;
// int main()
// {
//     int n,array_sum=0,left_array,right_array,low;
//     vector<int> b[1000];
//     int a[1000];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//         array_sum += a[i];
//     }
//     for(int i=0;i<=n-1;i++)
//     {
//         for(int j=i+1;j<n;j++)
//         {
//             right_array = right_array + a[j];
//         }
//       //  cout<<"right"<<right_array<<"\n";
        
//         left_array = array_sum - right_array;
        
//       //  cout<<"left"<<left_array<<"\n";
        
//         if(right_array>left_array)
//         {
//            // cout<<"diff"<<right_array-left_array<<"\n";
//             b->push_back(right_array-left_array);
//         }
//         else
//         {
//           //  cout<<"diff"<<left_array-right_array<<"\n";
//             b->push_back(left_array-right_array);
//         }
//         right_array=0;
//         left_array=0;
//     }
//     low = *min_element(b->begin(),b->end());
//     cout<<low;
// }

// #include "iostream"
// #include "vector"
// using namespace std;
// int main()
// {
//     int n;
//     int a[1000];
//     vector<int> b[1000];
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>a[i];
//     }
//     bool diff = false;
//     for(int i=0;i<n;i++)
//     {
//         if(a[i]!= a[i+1])
//         {
//             diff =true;
//         }
        
        
//     }
//     for(int i=0;i<n;i++)
//     {
//         if(a[i] == a[i+1])
//         {
//             b->push_back(a[i]);
//         }
//         else
//         {
//             continue;
//         }
        
//     }
// }
// #include "iostream"
// #include "string"
// #include "vector"
// using namespace std;
// int main()
// {
//     string s,s1;
//     cin>>s;
//     cin>>s1;
//     for(int i=0;i<s.length();i++)
//     {
//         if(s[i]==s1[i]=='?')
//         {
//             s[i] = s1[i] = 't';
//         }
//         else if(s[i] == '?')
//         {
//             s[i] = s1[i];
//         }
//         else if(s1[i]=='?')
//         {
//             s1[i] = s[i];
//         }
//         else
//         {
//             continue;
//         }
//         cout<<"string 1: "<<s<<"\n";
//         cout<<"string 2: "<<s1<<"\n";
//     }
// cout<<"string 1: "<<s<<"\n";
//         cout<<"string 2: "<<s1<<"\n";
// cout<<s.compare(s1)<<"\n";
// bool same;
// for(int i=0;i<s.length();i++)
// {
//     if(s[i] != s1[i])
//     {
//        same = false;
//        break;
//     }
//     else
//     {
//         same = true;
//     }
    
// }
//     if(same)
//     {
//         cout<<"Yes"<<"\n";
//     }
//     else
//     {
//         cout<<"No"<<"\n";
//     }
    
//}
#include "iostream"
#include "algorithm"
#include "string"
#include "vector"
using namespace std;
typedef long long ll;
int main()
{
    int i=0,x,temp,temp1,pos=0,count=0;
    int sum=0;
    string s;
    cin>>s;
    int  a[100],b[100];
    // converting each character into integer by subtracting 
    while(i!=s.size())
    {
        a[i] = s[i] - '0';
        b[i] = a[i];
        i++;
        count++;
    }
    
    for(int m=0;m<count;m++)
    {
        sum = sum + a[m]; 
    }
    //cout<<a.size()<<"\n";
    //cout<<a[a.size()-1]<<"\n";
    cout<<count<<"\n";
        if((a[count-1]%2 != 0 && sum%3 == 0)||(a[count-1]%2 == 0 && sum%3 != 0))
        {
            pos = -1;
            
        }
        else
        {
        sort(a,a+count);
        for(int k=0;k<count;k++)
        {
             
            //  temp = sum-a[i+1];
            //  temp1 = sum - a[i];
            //  if(temp1%6==0 && temp1>=temp)
            //  {
            //      cout<<"temp 1 :"<<temp1<<"\n";
            //      cout<<"x :"<<x<<"\n";
            //      x = a[i];
            //  }
            //  else if(temp%6==0 && temp1<=temp)
            //  {
            //      cout<<"temp  :"<<temp<<"\n";
            //      cout<<"x :"<<x<<"\n";
            //      x = a[i+1];
            //  }

             temp =  sum-a[k];  
             if(temp%3==0)
             {
                 x = a[k];
                 break;
             }
            cout<<"new temp :"<<temp<<"\n";
            cout<<"new x :"<<x<<"\n";

        }     
    
        }
    // sort(a.begin(),a.end());
//     for(int i=0;i<a.size();i++)
//     {
//         cout<<a[i];
//     }
//    cout<<"\n";
cout<<x<<"\n";
for(int j=1;j<=count;j++)
{
    if(b[j]==x)
    {
        cout<<j<<"\n";
        pos = j;
        cout<<pos<<"\n";
    }
}
    cout<<pos+1;
}


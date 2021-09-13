#include "iostream"
#include "string"
using namespace std;
int main()
{
    int t,l;
    string s,r;
    cin>>t;
    while(t--)
    {
        cin>>l;
        cin>>r;
        for(int i=0;i<l;i=i+2)
        {
            if(r[i] == '0' || r[i] == '1')
            {
                s[i] =  r[i];
            }
            cout<<s[i];   
        }
        cout<<"\n";

    }
}
//*max_element(a,b);
/*
    Problem 2.
    me atmost p units and  follower -  atmost f units
    in blacksmith  = cnts swords and cntw  war axes
    each sword weight = s units, each  war axes = w units/
*/

// #include "iostream"
// using namespace std;
// typedef long long ll;
// int main()
// {
//     ll t;
//     int p,f,s,w,cnts,cntw,x,y;
//     cin>>t;
//     while(t--)
//     {
//         cin>>p>>f;
//         cin>>cnts>>cntw;
//         cin>>s>>w;
//         for(int i =0,i1=0 ; i<cnts;i++,i1++)
//         {
//             for(int j=0,j1=0;j<cntw;j++,j1++)
//             {
//                 if(p>=s*i + w*j || f>= s*i1 + w*j1)
//                 {
//                     x = i1 + i;
//                     y = j1 + j ;
//                 }
//             }
//         }
//         cout<<x+y<<"\n";

//     }


// }

// #include "iostream"
// #include "string"
// #include "algorithm"
// using namespace std;
// int main()
// {
//   string w;
//   string s;
//   int t,x;
//   cin>>t;
//   while(t--)
//   {
//       bool same1 = false,same2 = false;
//       cin>>w;
//       cin>>x;
//       for(int i=0;w[i]!='\0';i++)
//       {
//           if(i>x && w[i-x]== '1')
//           {
//               same1 = true;
//               s[i] = '1';
//           }
//           else if(i+x<=w.length() && w[i+x]=='1')
//           {
//               same2 = true;
//               s[i] = '1';
//           }
//           else 
//           {
//               s[i] = '0';
//           }

//           cout<<s[i];
//       }
//       cout<<"\n";
//   }   
// }
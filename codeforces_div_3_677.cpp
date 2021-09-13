// PROBLEM1
// #include "iostream"
// #include "vector"
// #include "string"
// #include "map"
// using namespace std;
// typedef long long ll;
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n,count=0;
//         cin>>n;
//         int x = n;
//         int sol = 0;   
//         while(x>0)
//         {
//             x/= 10;
//             count++;
//         }
//         int a = n%10;
//         if(count == 1)
//         {
//             sol = (a-1)*10 + 1;
//         }
//         else if(count == 2)
//         {
//             sol = (a-1)*10 + 3;
//         }
//         else if(count == 3)
//         {
//             sol = (a-1)*10 + 6;
//         }
//         else
//         {
//             sol = (a-1)*10 + 10;
//         }

//         cout<<sol<<"\n";
        
//     }
// }

//PROBLEM 2

#include "iostream"
#include "vector"
#include "string"
#include "map"
#include "cstring"
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> a(n);
        int Ones = 0;
        for(int i = 0 ; i < a.size() ; i++)
        {
            cin>>a[i];
            if(a[i] == 1)
            {
                Ones++;
            }
        }
        // int x = Ones;
        // int count_ones = 0, maxOnes;
        // for(int i = 0 ; i < x ; i++)
        // {
        //     if(a[i] == 1)
        //     {
        //         count_ones++;
        //     }
        // }
        // maxOnes = count_ones;
        // for(int i = 1 ; i <= a.size() -x ; i++)
        // {
        //     if(a[i-1] == 1)
        //     {
        //         count_ones--;
        //     }
        //     if(a[i+x-1] == 1) 
        //         {count_ones++; }
      
        //     if (maxOnes < count_ones) 
        //     {maxOnes = count_ones; }
        // }
        // int numberOfZeros = x - maxOnes;
        int noOfZeroes[1000]; 
    memset(noOfZeroes, 0, sizeof(noOfZeroes)); 
  
    int i, count = 0; 
  
    
    noOfZeroes[n - 1] = 1 - a[n - 1]; 
    for (i = n - 2; i >= 0; i--) { 
        noOfZeroes[i] = noOfZeroes[i + 1]; 
        if (a[i] == 0) 
            noOfZeroes[i]++; 
    } 
  
    for (i = 0; i < n; i++) { 
        if (a[i] == 1) 
            count += noOfZeroes[i]; 
    } 
        cout<< count<<"\n";
        
    }
}
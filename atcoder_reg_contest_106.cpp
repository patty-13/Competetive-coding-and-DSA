#include "iostream"
#include "vector"
#include "map"
#include "string"
#include "math.h"
#include "algorithm"
using namespace std;
typedef long long ll;
int main()
{
    int a,b,n,x,y,z;
    cin>>n;
   bool same = false;
    for(int i = 1; i < (int) sqrt(n) ; i++)
    {
        for(int j = 1 ; j < (int)sqrt(n) ; j++)
        {
            if(pow(3,i)+pow(5,j) == n)
            {
                x = i;
                y = j;
                same = true;
                break;
            }
            else
            {
                z = -1;
                same = false;
            }
            
        }
        
        
    }
    if(!same)
        {
            cout<<x<<" "<<y<<"\n";
        }
        else
        {
            cout<<z;
        }

}
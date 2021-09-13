#include "iostream"
#include "algorithm"
#include "math.h"
#include "vector"
#include "map"
using namespace std;
typedef long long ll;
// PROBLEM 1.
// COUNTING THE NUMBER OF WAYS THE TRAVELLER WOULD REACH FROM START
// TO END
// ll arr[1000][1000];
// ll gridTraveler(ll n, ll m)
// {
    
    /*
        first seeing the base cases that satisfy the grid
        that is look at the ends of the tree

        that is in a grid there the cases that are not valid
        like  case where any of the column or row are zero.
    */
// first when any of the column or row is zero
    //pair<int,int> p;
 
//    if(n == 0 || m == 0)
//    {
//        return 0;
//    }
//    // if we reach the final destination 
//    if(n==1 && m ==1)
//    {    
//        return 1;
//    }
//    if(arr[m][n] != 0)
//    {
//        return arr[m][n];
//    }
//    else
//    {
//        arr[m][n] = arr[n][m] = gridTraveler(n-1,m)+gridTraveler(n,m-1);
//        return arr[n][m];
//    }
   
// }
// int main()
// {
//     ll n,m;
//     cin>>n>>m;
//    cout<<gridTraveler(n,m)<<"\n";
    
// }
/*
  dynamic programming tips
  1. Make it work
    . visualize the problem as a tree.
    . implement the tree using recursion. //basically the tree is like ar
    recursive tree.
    . test it. // it should give back good solution.
 2. Make it efficient
    . add a memo object
    . add a new base case to return memo values.
    . store return valeus into the memo object.
*/


// PROBLEM 2
/*
    Write a function 'canSum(targetSum, numbers) that takes in a 
    targetSum and an array of numbers as arguments.

    The function should return a boolean indicatinng whether or not
    it is possible to generate the targetSum using numbers from the
    array.
*/
/*
ll memo[10000];
bool canSum(int targetSum, vector<int> &a)
{
    if(targetSum == 0){return true;}
    if(memo[targetSum] == 0) {return true;}
    if(memo[targetSum] < 0){return false;}
    for(int i=0;i<a.size();i++)
    {
        int remainder = targetSum - a[i];
        if(canSum(remainder,a) == true)
        {
            memo[targetSum] = 0;
            return true;
        }
    }
    memo[targetSum] = -1;
    return false;
    
}
int main()
{
    ll targetSum;
    int n;
    cin>>targetSum;
    cin>>n;
    vector<int> a(n);
    for(int i =0 ; i<n ; i++)
    {
        cin>>a[i];
    }
    cout<<canSum(targetSum,a);
}
*/

/*
    PROBLEM - 3
    Write a function 'howSum(targetSum, numbers) that takes in a
    targetSum and an array of numbers as arguments.

    The array should return an array containing any combinations
    of elements that add up to exactly the targetSum. If there is
    no combination that adds up to the targetSum, then return null.

    If there are multiple combinations possible, you may return any
    single one. 
*/
int memo[10000];
vector<int> v;
bool howSum(int targetSum, vector<int> &a)
{
    if(targetSum == 0){return a[targetSum];}
    if(memo[targetSum] <0) {return NULL;}

    for(int i = 0; i< a.size() ; i++)
    {
        int remainder = targetSum - a[i];
        if(howSum(remainder,a) == true)
        {
            v.push_back(a[i]);
            memo[targetSum] =1;
            return true;
        }
        else
        {
            memo[targetSum] = -1;
        }
    }
    return false;
}
int main()
{
    int n,targetSum;
    cin>>n>>targetSum;
    vector<int> a(n);
    for(int i=0; i<a.size();i++)
    {
        cin>>a[i];
    }
    if(howSum(targetSum,a)==true)
    {
        for(int i = 0 ; i<v.size() ; i++)
        {
            cout<<v[i]<<" ";
        }
    }
}
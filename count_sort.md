#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>original_array={64,5,1,2,2,7,1,9,12,13};
    vector<int>sorted(original_array.size(),0);
    
    int count[65]={0};
    
    //perform hashing
    for(int i=0;i<original_array.size();i++)
    { 
        count[original_array[i]]++;
    }
    
    //perform cumulative operation in the same array to keep the space complexity
    
    for(int i=1;i<65;i++)
    {
        count[i]=count[i-1] + count[i];   // [0,1,3,4,5,5,6]
    }
    
    //compare the original_array and counting array
    for(int i=sorted.size()-1;i>=0;i--)
    {
        sorted[count[original_array[i]]-1]=original_array[i];
        count[original_array[i]]--;
    }
    
    for(int x:sorted)
    {
        cout<<x<<" ";
    }
    
    
}


//here we create a sorte array with the help of original_array and counting_array 
//it will point the index to place a number in the sortd manner
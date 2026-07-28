#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={10,3,58,87,33,87};
    
    int greatest_number=arr[0];
    int min_great=-1;
    
    for(int i=1;i<arr.size();i++)
    {
        if(arr[i]>greatest_number)
        {
            min_great=greatest_number;
            greatest_number=arr[i];
        }
        else if(arr[i]>min_great && arr[i] != greatest_number)
        {
            min_great=arr[i];
        }
    }
    
    cout<<min_great;
    
    
    
    
}
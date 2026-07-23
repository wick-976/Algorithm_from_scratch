#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>arr={65,23,32,6,7};

    for(int i=1;i<arr.size();i++)
    {
        int j=i;
        while(j>0 && arr[j-1] >arr[j] )
        {
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
    
    for(int x:arr)
    {
        cout<<x<<" ";
    }
}
//this is algorihtm of the insertion sort in ascending order.
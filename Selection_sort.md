#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    int min_index=0;
    
    for(int i=0;i<size-1;i++)
    {
        min_index=i;
        for(int x=i+1;x<=size-1;x++)
        {
            if(arr[min_index]>arr[x])
            {
                min_index=x;
            }
        }
        
        if(min_index!=i)
        {
            swap(arr[i],arr[min_index]);
        }
    }
    
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
//the basic idea is to selec the min mum value and upadet that vakue to the min_id and 
//swap with the  1st index 
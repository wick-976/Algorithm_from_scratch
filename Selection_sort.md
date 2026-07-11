#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr_size;
    cin>>arr_size;
    int arr[arr_size];
    for(int i=0;i<arr_size;i++)
    {
        cin>>arr[i];
    }
    
    int min_id=0;
    
    for(int i=0;i<=arr_size-2;i++)
    {
        min_id=i;
        
        for(int z=i+1;z<arr_size;z++){
            if(arr[i] > arr[z])
            {
                min_id=z;
            }
            if(min_id!=i)
            {
                swap(arr[min_id],arr[i]);
            }
            
        }
    }
    
    for(int i=0;i<arr_size;i++)
    {
        cout<<arr[i]<<" ";
    }
    
    
}
//the basic idea is to selec the min mum value and upadet that vakue to the min_id and 
//swap with the  1st index 
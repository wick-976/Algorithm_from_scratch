//in this we see the implemntation of the bubble sort


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int size;
    cin>>size;

    vector<int>arr1(size);
    for(int i=0;i<size;i++)
    {
        cin>>arr1[i];
    }
    
    bool flag;

    for(int i=0;i<size-1;i++)
    {
        flag=false;
        for(int z=0; z<size-i-1;z++)
        {
            if(arr1[z]>arr1[z+1])
            {   
                flag=true;
                swap(arr1[z],arr1[z+1]);
            }
        }
        if(flag==false)
        {
            break;
        }
        
    }

    for(int i=0;i<size;i++)
    {
        cout<<arr1[i];
    }



}
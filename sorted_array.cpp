bool isSorted(int arr[], int n) {
    
    bool answer=true;
    
    for(int i=1;i<n;i++)
    {
        if(arr[i] < arr[i-1])
        {
            answer=false;
        }
    }
    
    return answer;
}
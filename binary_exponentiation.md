//the key idea is to sqaure the base ans divide the power by 2 if have a odd number 
//like 2**7 just do like 2 * 2**6.   like this we store that 2 in variabale x(ans).


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int base,power;
    int ans=1;
    cin>>base>>power;
    
    
    while(power>0)
    {
        if(power%2!=0)
        {
            ans=ans*base;
        }
        base=base*base;
        power/=2;
    }
    
    cout<<ans;
}
#include <iostream>
using namespace std;
int main()
{
    int n,a,b,ans = 0,i;
    cin>>n;
    for(i = 0; i < n; i++)
    {
        cin>>a>>b;
        ans += a * b;
    }
    if(ans < 0)
    ans = 0;
    cout<<ans<<endl;
    return 0;
}
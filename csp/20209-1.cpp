#include <iostream>
using namespace std;
int main()
{
    int i,n,X,Y,pos[200];
    cin>>n>>X>>Y;
    int x,y,ans[3][2];
    ans[0][0] = 2147483645;
    ans[1][0] = 2147483645;
    ans[2][0] = 2147483645;
    for(i = 0; i < n; i++)
    {
        cin>>x>>y;
        pos[i] = (x - X) * (x - X) + (y - Y) * (y - Y);
    }
    for(i = 0; i < n; i++)
    {
        if(pos[i] < ans[0][0])
        {
            ans[2][0] = ans[1][0];
            ans[2][1] = ans[1][1];
            ans[1][0] = ans[0][0];
            ans[1][1] = ans[0][1];
            ans[0][0] = pos[i];
            ans[0][1] = i + 1;
        }
        else if(pos[i] < ans[1][0])
        {
            ans[2][0] = ans[1][0];
            ans[2][1] = ans[1][1];
            ans[1][0] = pos[i];
            ans[1][1] = i + 1;
        }
        else if(pos[i] < ans[2][0])
        {
            ans[2][0] = pos[i];
            ans[2][1] = i + 1;
        }
    }
    cout<<ans[0][1]<<endl;
    cout<<ans[1][1]<<endl;
    cout<<ans[2][1]<<endl;
    return 0;
}
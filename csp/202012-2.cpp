#include <iostream>
#include <algorithm>
using namespace std;
int MaxSize = 100000;
typedef struct
{
    int theta,result;
    int pre;
} predict;
bool cmp(predict x, predict y)
{
    return x.theta <= y.theta;
}
int main()
{
    int m,i,a = 0;
    predict p[MaxSize];
    cin>>m;
    for(i = 0; i < m; i++)
    {
        cin>>p[i].theta>>p[i].result;
        p[i].pre = 0;
        if(p[i].result == 1)
        a++;
    }
    sort(p, p + m, cmp);
    int b = 0,maxnum = 0;
    cout<<endl;
    for(i = 0; i < m; i++)
    {
        if(i!= 0 && p[i].theta == p[i - 1].theta)
        p[i].pre = p[i - 1].pre;
        else
        p[i].pre = b + a;
        if(p[i].result == 0)
        b++;
        a = a - p[i].result;
        maxnum = p[maxnum].pre > p[i].pre ? maxnum : i;
        cout<<p[i].theta<<' '<<p[i].pre<<endl;
    }
    cout<<endl;
    cout<<p[maxnum].theta<<endl;
    return 0;
}
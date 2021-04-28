#include <iostream>
using namespace std;
int m,n,l[256],num;
int MaxSize = 256;
void init()
{
    int i;
    for(i = 0; i < MaxSize; i++)
    l[i] = 0;
}
int main()
{
    int i, j, tmp;
    cin >> n >> m >> num;
    init();
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < m; j++)
        {
            cin >> tmp;
            l[tmp]++;
        }
    }
    for(i = 0; i < num; i++)
    {
        cout << l[i] << ' ';
    }
    cout << endl;
    return 0;
}
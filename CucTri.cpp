#include <bits/stdc++.h>

using namespace std;

long long int a[101][101];
long long int b[]={-1, -1, -1, 0, 0, 1, 1, 1};
long long int c[]={-1, 0, 1, -1, 1, -1, 0, 1};

int main()
{
    long long int n, m; 
    
    freopen("CUCTRI.INP","r",stdin);
    freopen("CUCTRI.OUT","w",stdout);

    cin >> n >> m;

    for (long long int i = 1; i <= n; i++)
    {
       for (long long int j = 1; j <= m; j++)
       {
           cin >> a[i][j];
       }
    }

    long long int k, x, y, cnt, res = 0;

    for (long long int i = 1; i <= n; i++)
        for (long long int j = 1; j <= m; j++)
        {
            cnt = 0;
            for (long long int k = 0; k < 8; k++)
            {
                x = i + b[k];
                y = j + c[k];
                if (x > 0 && x <= n && y > 0 && y <= m)
                {
                    if (a[i][j] <= a[x][y])
                    {
                        cnt++;
                        break;
                    }
                }
            }
            if (cnt == 0) 
                res++;
        }

    for (long long int i = 1; i <= n; i++)
        for (long long int j = 1; j <= m; j++)
        {
            cnt = 0;
            for (long long int k = 0; k < 8; k++)
            {
                x = i + b[k];
                y = j + c[k];
                if (x > 0 && x <= n && y > 0 && y <= m)
                {
                    if (a[i][j] >= a[x][y])
                    {
                        cnt++;
                        break;
                    }
                }
            }
            if (cnt == 0) 
                res++;
        }
    
    cout << res;
    return 0;
}

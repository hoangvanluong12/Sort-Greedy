#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n, f[10000];

    int check[10008];

	freopen("TanSuat.inp", "r", stdin);
	freopen("TanSuat.out", "w", stdout);

    memset(check, 0, sizeof(check));
    check[0] = -1;
    check[1] = -1;

    for (int i = 2; i < 10000; ++i)
    {
        for (int j = i * 2; j <= 10000; j += i)
        {
            check[j] = -1;
        }
    }

    while(cin >> n)
    {
        if(check[n] == 0)
            f[n]++;
    }    
//
//	for(int i = 0; i < 12; i++)
//		cout << i << ": " << f[i] << endl;
	
    int res = 0, max = 0;

    for(int i = 10000; i >= 2; --i)
    {
        if(f[i] > max)
        {
            res = i;
            max = f[i];
        }

    }

    cout << res << " " << max;
	
    return 0;
}	

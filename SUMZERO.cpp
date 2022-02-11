#include <bits/stdc++.h>

using namespace std; 

int main()
{
    int n;

    long int a[10008], prefix[10008], max = 0;
    
    freopen("SUMZERO.inp", "r", stdin);
    freopen("SUMZERO.out", "w", stdout);
    
    
    prefix[0] = 0;
    
	cin >> n;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        prefix[i] = prefix[i-1] + a[i];
    }

    for (int i = n; i >= 1 ; --i)
    {
        for(int j = 0; j <= i-1; j++)
        {
            if (prefix[i] - prefix[j] == 0 && i - j >= max)
            {
                for(int t = j + 1; t <= i; t++)
                    cout << a[t] << " ";
                return 0;
            }
        }
    }

    cout << -1;
    return 0;
}


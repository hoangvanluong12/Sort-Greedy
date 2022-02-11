#include <bits/stdc++.h>

using namespace std;


string a[108];

int main()
{
    int n;
    
    freopen("NUMJOIN.inp", "r", stdin);
    freopen("NUMJOIN.out", "w", stdout);
//
//    for (int i = 0; i < n-1; ++i)
//    {
//        for(int j = i+1; j < n; ++j)
//        {
//            int m = min(a[i].length(), a[j].length());
//            for(int t = 0; t < m; ++t)
//            {
//                if(a[i][t] < a[j][t])
//                {
//                    string tmp = a[i];
//                    a[i] = a[j];
//                    a[j] = tmp;
//                    break;
//                }
//            }
//        }
//    }    
	
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
	
    sort(a, a+n);    
        
    for (int i = n-1; i >= 0; --i)
    {
        cout << a[i];
    }


    return 0;
}

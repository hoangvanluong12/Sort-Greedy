#include <bits/stdc++.h>

using namespace std; 


int n, m, a[1000][1000], b[100000];
int main()
{

	freopen("SapXep.inp", "r", stdin);
	freopen("SapXep.out", "w", stdout);

    cin >> n >> m;


	int index = 0;

    for(int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> a[i][j];
            b[index] = a[i][j];
            index++;
        }
    }
		
	sort(b, b+index);
	
	for(int i = 0; i < n; i++)
	{
		if(i % 2 == 0)
		{
			for(int j = m * i; j < m * (i+1); j++)
			{
				printf("%d ", b[j]);
			}
		}
		
		else
		{
			for(int j = m * (i+1) - 1; j >= m*i; j--)
			{
				printf("%d ", b[j]);
			}
		}
		printf("\n");
	}


    return 0;
}

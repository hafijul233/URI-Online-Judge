#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;

    while(scanf("%d %d",&n,&m)!=EOF)
    {
        int models[n];

        for(int i=0; i<n; i++)
        {
            scanf("%d",&models[i]);
        }
            sort(models, models + n);//using stl::sort in descending order

            int total_damage = 0;

            for(int i=n-1; i>=0; i--)
            {
                //printf("%d\t",models[i]);
                total_damage += models[i];
            }
        printf("%d\n",total_damage);
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int limit;
        cin >> limit;
    while(limit != 0)
    {
        int value = 0;
        for(int i = 1; i<=limit; i++){
            for(int j=1; j<=limit; j++){
                cout <<j<<" ";
            }
            cout << endl;
        }

        cin >> limit;
    }
    return 0;
}

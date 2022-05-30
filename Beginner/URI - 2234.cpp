#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m,p;
    while(cin >> m >> p){
        float divisor = (float)m/p;
        cout <<setprecision(2) << fixed << divisor <<endl;
    }
    return 0;
}

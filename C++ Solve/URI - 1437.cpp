#include <bits/stdc++.h>

using namespace std;

int main()
{
    int vajok,vajjo,vagfol,vagshes;

    while(cin >> vajjo >> vajok)
    {
        if(vajjo<0){

        }

        vagfol = vajjo / vajok;
        vagshes = vajjo % vajok;

        cout << vagfol << " " << vagshes <<endl;

    }

    return 0;
}

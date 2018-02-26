#include <bits/stdc++.h>

using namespace std;

int main()
{
    int limit;
    while((cin >> limit)!=0){

        for(int i=1;i<=limit;i++){
              int value = i;
            for(int j=0;j<limit;j++){
                value=pow(value,j);
                cout << "  "<< value;
            }
            cout << endl;
        }
    }
    return 0;
}

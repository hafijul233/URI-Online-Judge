#include <bits/stdc++.h>

using namespace std;

int main()
{
    int limit;
        cin >> limit;
        int input,multipler_2 = 0,multipler_3 = 0,multipler_4 = 0,multipler_5 = 0;
        while(limit--){
            cin >> input;

            if(input % 2 == 0)multipler_2++;
            if(input % 3 == 0)multipler_3++;
            if(input % 4 == 0)multipler_4++;
            if(input % 5 == 0)multipler_5++;
        }

        cout << multipler_2 <<" Multiplo(s) de 2" << endl;
        cout << multipler_3 <<" Multiplo(s) de 3" << endl;
        cout << multipler_4 <<" Multiplo(s) de 4" << endl;
        cout << multipler_5 <<" Multiplo(s) de 5" << endl;

    return 0;
}

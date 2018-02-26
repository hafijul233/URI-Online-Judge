#include <bits/stdc++.h>

using namespace std;

int main(){

    float volume, diameter;
    while(cin >> volume >> diameter){
        float height = (4*volume)/(3.14*(diameter*diameter));
        float area = (3.14*(diameter*diameter))/4;
        cout << setprecision(2) <<fixed << "ALTURA = " << height <<endl;
        cout << setprecision(2) <<fixed << "AREA = " << area <<endl;

    }
    return 0;
}


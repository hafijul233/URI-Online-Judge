#include <bits/stdc++.h>

using namespace std;

float area_calculation (int a, int b, int c){

    float s = (a+b+c)/2.0;
    float area = sqrt(s)*sqrt(s-a)*sqrt(s-b)*sqrt(s-c);

    return area;
}

int main()
{
    int a,b,c,d;
    while(cin >> a >> b >> c >> d){
        int yes = 0;
        if(area_calculation(a,b,c) > 0) yes++;
        if(area_calculation(a,b,d) > 0) yes++;
        if(area_calculation(a,b,c) > 0) yes++;
        if(area_calculation(a,c,d) > 0) yes++;
        if(area_calculation(b,c,d) > 0) yes++;

        if(yes!=0) cout << "S" <<endl;
        else cout << "N" <<endl;
    }
    return 0;
}

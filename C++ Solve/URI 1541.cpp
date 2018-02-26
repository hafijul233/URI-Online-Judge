#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a,b,c;
    while(cin >> a ){
        if(a == 0) break;

        else{
            cin >> b >> c ;
            int area = a*b;// total area given
            int house = (area*100)/c; //c% area allowed to build house
            int maximum_space = (int)sqrt(house); // maximum fill be floor of allowed space
            cout << maximum_space << endl;
        }
    }
    return 0;
}

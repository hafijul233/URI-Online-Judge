#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,total = 0;
    while(cin >> a >> b >> c >> d)
    {
        total = (a+b+c+d) - 3;

        cout << total<<endl;
    }
    return 0;
}

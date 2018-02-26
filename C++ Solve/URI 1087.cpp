#include <iostream>
#include <cmath>

using namespace std;

int main(){

    while(1){
        int x1,y1,x2,y2;
        cin >> x1 >> y1 >> x2 >> y2;
        if(x1 == 0 &&y1 == 0 &&x2 == 0 &&y2 == 0)
            break;
        else{
            if(x1 == x2 && y1 == y2) cout << "0" <<endl; // if they on same location

            else if(x1 == x2 || y1 == y2) cout << "1" <<endl; // if they are on same row or column

            else
            {
                if(abs(x1-x2) == abs(y1-y2)) cout << "1" << endl;

                else cout << "2" << endl;
            }
        }
    }
    return 0;
}

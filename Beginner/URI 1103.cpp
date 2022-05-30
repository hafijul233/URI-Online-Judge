#include <iostream>
#include <cmath>

using namespace std;

int main(){

    while(1){
    int h1,m1,h2,m2;
    cin >> h1 >> m1 >> h2 >> m2;

    if(h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0) break;

    else{
            int diff,diff_min;
            if(h1 < h2){
                if(m2<m1)diff_min = m1-m2;
                else diff_min = m2 - m1;

                    diff = (h2-h1)*60+diff_min;
            }
            else if(h1 == h2){
                if(m2<m1)diff_min = m1-m2;
                else diff_min = m2 - m1;

                    diff = 1440 - diff_min;
            }
            else if(h1 > h2){

            }

            cout << diff << endl;
        }
    }
    return 0;
}

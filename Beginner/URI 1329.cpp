#include <iostream>

using namespace std;

int main()
{
    int terms;
    while(cin >> terms){
        if(terms == 0) break;
    else{
        int coin,Mary = 0, John = 0;
        for(int i=0;i<terms;i++){
            cin >> coin;
            if(coin == 0) Mary++;
            else John++;
        }
        cout << "Mary won "<< Mary <<" times and John won "<< John <<" times" << endl;
      }
    }

    return 0;
}

#include <iostream>

#define MAX 20001

using namespace std;

int main(){

    int limit;
    while(cin >>limit){
        int values[MAX] = {0};

        for(int i=0;i<limit; i++){
            int temp;
            cin >> temp;
            values[temp]++;
        }

        for(int i=0;i<MAX;i++){
            for(int j=0;j<values[i];j++){
                if(values[i]>0){
                    cout <<i<<" aparece " <<values[i]<<" vez(es)" << endl;
                    break;
                }
            }
        }
    }
    return 0;
}

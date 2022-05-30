#include <iostream>

using namespace std;

int main(){
    int limit;
    int leds[10]={6,2,5,5,4,5,6,3,7,6};
    cin >> limit;
    while(limit--){
            string text;
            int total_leds = 0;
        cin >> text;
        for(int i = 0; i<text.length(); i++){
                int character = text.at(i)-'0';
            total_leds+=leds[character];
        }
        cout <<total_leds<<" leds" << endl;
    }

    return 0;
}

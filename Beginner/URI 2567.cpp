#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int virus_number;
    while(cin >> virus_number){
        int virus_life[virus_number],even_sum = 0, odd_sum = 0;
        for(int i = 0;i<virus_number; i++){
            cin >> virus_life[i];
        }
        if(virus_number%2!=0){
                sort(virus_life,virus_life+virus_number);
                cout << virus_life[virus_number-1] << endl;
        }
                if(i%2 == 0)even_sum-=virus_life;
                else odd_sum-=virus_life;
        }
        cout << even_sum << "\t" << odd_sum << endl;
        cout << abs(even_sum - odd_sum) <<endl;
    }
    return 0;
}

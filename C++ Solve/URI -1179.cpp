#include <bits/stdc++.h>

using namespace std;

int main(){

    int input[15],even[5],odd[5],even_count = 0, odd_count = 0;

        for(int i=0; i<15; i++){
            cin >> input[i];
            if(input[i]%2 == 0)
            {
                even[even_count++] = input[i];
                if(even_count == 5){
                    for(int j=0;j<5;j++)
                        cout << "par["<<j<<"] = "<< even[j]<<endl;

                    even_count  = 0;
                }
            }

            else
            {
                odd[odd_count++] = input[i];
                if(odd_count == 5){
                    for(int j=0;j<5;j++)
                        cout << "impar["<<j<<"] = "<< odd[j]<<endl;

                    odd_count  = 0;
                }
            }

        }

            for(int i=0;i<odd_count; i++)
                cout << "impar["<<i<<"] = "<< odd[i]<<endl;

            for(int j=0;j<even_count;j++)
                        cout << "par["<<j<<"] = "<< even[j]<<endl;


    return 0;
}

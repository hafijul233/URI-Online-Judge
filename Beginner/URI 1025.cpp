#include <iostream>
#include <algorithm>

using namespace std;
int binarySearch(int marbles[], int l, int r, int x){
   if (r >= l){
        int mid = l + (r - l)/2;

        if (marbles[mid] == x)
            return mid;

        if (marbles[mid] > x)
            return binarySearch(marbles, l, mid-1, x);

        return binarySearch(marbles, mid+1, r, x);
   }

   return 0;
}

int main(){

    int n,q;
    while(cin >> n >> q){
        if(n==0 && q ==0) break;

        else{
            int marbles[n];
            for(int i=0;i<n;i++){
                cin >> marbles[i];
            }

            sort(marbles, marbles+n);

            for(int i=0;i<q;i++){
                int value;
            cin >> value;
                int result = binarySearch(marbles, 0, n-1, value);
                    if(result == 0) cout << value <<" not found"<<endl;
                    else cout << value <<" found at " << result+1 << endl;
            }
        }
    }
    return 0;
}

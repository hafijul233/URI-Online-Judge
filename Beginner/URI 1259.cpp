#include <iostream>
#include <algorithm>
#include <functional>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	int range;
	cin >> range;
    int even[range],odd[range],value,even_pos = 0,odd_pos = 0;

    while(range--){
      cin >> value;
      if(value%2 == 0)even[even_pos++] = value;
      else odd[odd_pos++] = value;
    }

    even_pos-=1;
    odd_pos-=1;

    sort(even, even+even_pos);
    sort(odd, odd+odd_pos, greater<int>());

    for(int i=0; i<=even_pos;i++){
      cout << even[i] << endl;
    }

    for(int i=0; i<=odd_pos;i++){
      cout << odd[i] << endl;
    }

  return 0;
}

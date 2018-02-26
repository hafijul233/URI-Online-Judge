#include <bits/stdc++.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{
	string msg = "Feliz natal!";
	int limit;
	while(cin >> limit){
      string extra = "a";
    if(limit == 1)cout << msg << endl;

    else{
      for(int i = 1;i<limit-1;i++){
        extra += "a";
      }
      msg.replace(10,11,extra);
      msg += "l!";
      cout << msg << endl;
    }
	}
   return 0;
}

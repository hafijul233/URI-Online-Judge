#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
	string eyes,screams;
	int sum = 0;
    cin >> eyes;
    getchar();
    getline(cin , screams);

      if(eyes == "--*") cout << "1" << endl;
        else if(eyes == "-*-") cout << "2" << endl;
        else if(eyes == "-**") cout << "3" << endl;
        else if(eyes == "*--") cout << "4" << endl;
        else if(eyes == "*-*") cout << "5" << endl;
        else if(eyes == "**-") cout << "6" << endl;
        else if(eyes == "***") cout << "7" << endl;
      else cout << "0" << endl;

  return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	while(getline(cin, text)){
    if(text.length()<=80){
      cout << "YES" << endl;
    }
    else{
      cout << "NO" << endl;
    }
	}
  return 0;
}

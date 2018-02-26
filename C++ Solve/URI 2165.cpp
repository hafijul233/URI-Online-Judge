#include <iostream>
#include <string>

using namespace std;

int main()
{
	string text;
	while(getline(cin, text)){
    if(text.length()<=140){
      cout << "TWEET" << endl;
    }
    else{
      cout << "MUTE" << endl;
    }
	}
  return 0;
}

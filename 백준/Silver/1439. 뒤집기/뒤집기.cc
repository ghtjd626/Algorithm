#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int a = 0;
    int b = 0;
    
    cin >>s;
    
    if(s[0]=='0') a++;
    else b++;
    
    for(int i = 1; i < s.length(); i++) {
        if(s[i-1] != s[i]) {
            if(s[i] == '0') a++;
            else b++;
        }
    }
    cout << min(a, b);
}

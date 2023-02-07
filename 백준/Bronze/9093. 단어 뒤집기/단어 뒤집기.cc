#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();
    
    while (t--) {
        string s = "";
        stack<char> stack;
        
        getline(cin, s);
        s += ' ';
        
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                while (!stack.empty()) {
                    cout << stack.top();
                    stack.pop();
                }
                cout << s[i];
            }
            else stack.push(s[i]);
        }
    }
}
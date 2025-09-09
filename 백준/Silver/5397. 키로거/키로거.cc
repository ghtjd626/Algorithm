#include <iostream>
#include <stack>
#include <vector>
#include <string>
#include <algorithm>  

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    while (n--) {
        string s;
        stack<char> a, b;
        cin >> s;

        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '<') {
                if (!a.empty()) { b.push(a.top()); a.pop(); }
            } else if (s[i] == '>') {
                if (!b.empty()) { a.push(b.top()); b.pop(); }
            } else if (s[i] == '-') {
                if (!a.empty()) a.pop();
            } else {
                a.push(s[i]);
            }
        }

        vector<char> result;
        // a: 거꾸로 들어가 있으니 꺼내서 뒤집기
        while (!a.empty()) { result.push_back(a.top()); a.pop(); }
        reverse(result.begin(), result.end());

        // b: top부터가 올바른 순서
        while (!b.empty()) { result.push_back(b.top()); b.pop(); }

        for (char c : result) cout << c;
        cout << '\n';
    }
}

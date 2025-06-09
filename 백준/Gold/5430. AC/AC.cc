#include <iostream>
#include <deque>
#include <string>
#include <sstream>

using namespace std;

deque<int> parseArray(const string& s) {
    deque<int> result;
    string num;
    for (char c : s) {
        if (isdigit(c) || c == '-') {
            num += c;
        } else if (!num.empty()) {
            result.push_back(stoi(num));
            num.clear();
        }
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;

    while (T--) {
        string p, arrStr;
        int n;
        cin >> p >> n >> arrStr;

        deque<int> dq = parseArray(arrStr);
        bool isReversed = false;
        bool isError = false;

        for (char cmd : p) {
            if (cmd == 'R') {
                isReversed = !isReversed;
            } else if (cmd == 'D') {
                if (dq.empty()) {
                    isError = true;
                    break;
                }
                if (isReversed) {
                    dq.pop_back();
                } else {
                    dq.pop_front();
                }
            }
        }

        if (isError) {
            cout << "error\n";
        } else {
            cout << "[";
            if (isReversed) {
                for (auto it = dq.rbegin(); it != dq.rend(); ++it) {
                    cout << *it;
                    if (it + 1 != dq.rend()) cout << ",";
                }
            } else {
                for (auto it = dq.begin(); it != dq.end(); ++it) {
                    cout << *it;
                    if (it + 1 != dq.end()) cout << ",";
                }
            }
            cout << "]\n";
        }
    }
}

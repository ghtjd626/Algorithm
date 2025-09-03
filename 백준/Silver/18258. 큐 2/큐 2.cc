#include <iostream>
#include <queue>
#include <algorithm>
#include <string>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
	cin.tie(NULL);

    int n;
    cin >> n;
    queue<int> q;

    while(n--){
        string s;
        cin >> s;
        int x;

        if(s.compare("push") == 0){
            cin >> x;
            q.push(x);
            continue;
        } else if(s.compare("pop")== 0){
            if(q.empty()) cout << "-1" << "\n";
            else {
                cout << q.front() << '\n';
                q.pop();
            }
            continue;
        } else if(s.compare("size")== 0){
            cout << q.size() << "\n";
            continue;
        } else if(s.compare("empty")== 0){
            if(q.empty()) cout << "1" << "\n";
            else cout << "0" << "\n";
            continue;
        } else if(s.compare("front")== 0){
             if(q.empty()) cout << "-1" << "\n";
            else {
                cout << q.front() << '\n';
            }
            continue;
        }else if(s.compare("back")== 0){
             if(q.empty()) cout << "-1" << "\n";
            else {
                cout << q.back() << '\n';
            }
            continue;
        }
       
    }
}
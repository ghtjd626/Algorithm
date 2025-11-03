#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <deque>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    if (!(cin >> n >> m)) return 0;

    deque<int> deq;
    for (int i = 1; i <= n; ++i) deq.push_back(i);

    int res = 0;
    while (m--) {
        int temp; 
        cin >> temp;

        // temp의 현재 위치 찾기
        int idx = 0;
        for (; idx < (int)deq.size(); ++idx) {
            if (deq[idx] == temp) break;
        }

        // 더 적은 회전 방향으로 돌리기
        if (idx <= (int)deq.size() / 2) {
            // 왼쪽 회전
            while (deq.front() != temp) {
                deq.push_back(deq.front());
                deq.pop_front();
                ++res;
            }
        } else {
            // 오른쪽 회전
            while (deq.front() != temp) {
                deq.push_front(deq.back());
                deq.pop_back();
                ++res;
            }
        }

        // 맨 앞 원소 제거
        deq.pop_front();
    }

    cout << res << '\n';
    return 0;
}
#include <iostream>
#include <stack>
#include <vector>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> vec(n);
    for(int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    vector<string> result;
    stack<int> stack;
    int num = 1; // 다음에 push할 숫자

    for(int i = 0; i < n; i++) {
        int target = vec[i];

        // target까지 push
        while(num <= target) {
            stack.push(num++);
            result.push_back("+");
        }

        // top이 target이면 pop
        if(stack.top() == target) {
            stack.pop();
            result.push_back("-");
        } else {
            // 불가능한 경우
            cout << "NO\n";
            return 0;
        }
    }

    for(size_t i = 0; i < result.size(); ++i) {
        cout << result[i] << "\n";
    }
    

    return 0;
}

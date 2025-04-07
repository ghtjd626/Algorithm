#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n, m;
    unordered_map<int, int> cardCount;
    vector<int> findList;

    cin >> n;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cardCount[a]++;
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        findList.push_back(b);
    }

    for (int i = 0; i < m; i++) {
        cout << cardCount[findList[i]] << " ";
    }

    return 0;
}

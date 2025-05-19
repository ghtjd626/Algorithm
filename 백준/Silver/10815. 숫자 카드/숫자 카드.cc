#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool binarySearch(const vector<int>& arr, int target) {
    int left = 0;
    int right = arr.size() - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) return true;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return false;
}

int main() {
    int n, m;
    cin >> n;
    vector<int> nCard(n);

    for (int i = 0; i < n; i++) {
        cin >> nCard[i];
    }

    cin >> m;
    vector<int> mNum(m);
    for (int i = 0; i < m; i++) {
        cin >> mNum[i];
    }

    sort(nCard.begin(), nCard.end());

    for (int i = 0; i < m; i++) {
        cout << binarySearch(nCard, mNum[i]) << ' ';
    }

    return 0;
}

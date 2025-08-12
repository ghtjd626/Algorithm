#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    int n, m;
    vector<string> result;
    map<string, int> nameMap;

    cin >> n >> m;

    for(int i = 0; i< n+m; i++){
        string name;

        cin >> name;

        if(nameMap[name] > 0) result.push_back(name);
        else nameMap[name]++;
    }
   sort(result.begin(), result.end());
    cout << result.size() << '\n';
    for (auto o : result)
        cout << o << '\n';
}
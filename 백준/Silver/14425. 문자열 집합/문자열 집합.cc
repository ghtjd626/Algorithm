#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main () {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    int res = 0;
    vector<string> nArr, mArr;

    cin >> n >> m;

    while(n--){
        string temp; 
        cin >> temp;
        nArr.push_back(temp);
    }
    sort(nArr.begin(), nArr.end());
    while(m--){
        string temp; 
        cin >> temp;
        if(binary_search(nArr.begin(), nArr.end(), temp)){
            res++;
        }
    }

    cout << res;

}
